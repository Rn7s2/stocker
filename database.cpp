#include "database.h"

#include <wx/datetime.h>
#include <wx/textfile.h>
#include <wx/tokenzr.h>

Record::Record(const unsigned long& isIn, const wxDateTime& time)
{
    this->isIn = isIn;
    this->time = time;
}

Item::Item()
{
    id = wxT("");
    name = wxT("");
    num = 0;
    price = 0.0;
}

bool Item::isValid()
{
    return name != wxT("");
}

Database::Database()
{
    wxTextFile file;

    if(!file.Open(wxT("database.db"))) {
        file.Create();
        return;
    }

    for(size_t i = 0; i < file.GetLineCount(); i++) {
        // 分割符是'|'，顺序是条码、名称、数量、价格、保质期和记录
        Item              tmp;
        wxString          str;
        wxStringTokenizer tkz(file[i], wxT("|"), wxTOKEN_STRTOK);

        str = tkz.GetNextToken();
        tmp.id = str;

        str = tkz.GetNextToken();
        tmp.name = str;

        str = tkz.GetNextToken();
        str.ToULong(&tmp.num);

        str = tkz.GetNextToken();
        str.ToDouble(&tmp.price);

        str = tkz.GetNextToken();
        tmp.expiration.ParseISODate(str);

        while(tkz.HasMoreTokens()) {
            wxDateTime    date;
            unsigned long isIn;

            str = tkz.GetNextToken();
            str.ToULong(&isIn);

            str = tkz.GetNextToken();
            date.ParseISODate(str);

            if(isIn)
                tmp.record.push_back(Record(1, date));
            else
                tmp.record.push_back(Record(0, date));
        }

        item.push_back(tmp);
    }

    file.Close();
}

// TODO: 参照数据格式，实现写入函数。
void Database::Write()
{
}

void Database::InsertItem(const Item& t)
{
    item.push_back(t);
}

void Database::DeleteItem(const Item& t)
{
    item.remove(t);
}

// TODO: 根据提供的str, 匹配所有名字和条码包含str的项目。
std::list<Item> Database::SearchItem(const wxString& str)
{

}
