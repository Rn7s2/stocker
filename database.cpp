#include "database.h"

#include <wx/datetime.h>
#include <wx/textfile.h>
#include <wx/tokenzr.h>

Record::Record(const long &cnt, const wxDateTime &time)
{
    this->cnt = cnt;
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
    return !name.empty();
}

// 分割符是'|'，顺序是条码、名称、数量、价格、保质期和记录
Database::Database()
{
    wxTextFile file;

    if (!file.Open(wxT("database.db"))) {
        file.Create();
        return;
    }

    for (size_t i = 0; i < file.GetLineCount(); i++) {
        Item tmp;
        wxString str;
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

        while (tkz.HasMoreTokens()) {
            wxDateTime date;
            long cnt;

            str = tkz.GetNextToken();
            str.ToLong(&cnt);

            str = tkz.GetNextToken();
            date.ParseISODate(str);

            tmp.record.emplace_back(cnt, date);
        }

        item.push_back(tmp);
    }

    file.Close();
}

void Database::Write()
{
    wxTextFile file;
    if (!file.Open(wxT("database.db")))
        file.Create();

    file.Clear();

    for (auto it = item.begin(); it != item.end(); it++) {
        wxString str = wxEmptyString;
        str << it->id << '|';
        str << it->name << '|';
        str << it->num << '|';
        str << it->price << '|';
        str << it->expiration.FormatISODate() << '|';

        for (auto v : it->record) {
            str << v.cnt << '|';
            str << v.time.FormatISODate() << '|';
        }
        file.AddLine(str);
        file.Write();
    }
    file.Write();
    file.Close();
}

void Database::ModifyItem(const Item &o, const Item &t)
{
    item.remove(o);
    item.push_front(t);
    Write();
}

void Database::InsertItem(const Item &t)
{
    item.push_front(t);

    wxTextFile file;
    if (!file.Open(wxT("database.db"))) {
        file.Create();
    }

    wxString str = wxEmptyString;
    str << t.id << '|';
    str << t.name << '|';
    str << t.num << '|';
    str << t.price << '|';
    str << t.expiration.FormatISODate() << '|';

    for (auto v : t.record) {
        str << v.cnt << '|';
        str << v.time.FormatISODate() << '|';
    }

    file.InsertLine(str, 0);
    file.Write();
    file.Close();
}

void Database::DeleteItem(const Item &t)
{
    item.remove(t);
    Write();
}

// 根据提供的str, 匹配所有名字和条码包含str的项目。
std::list<Item> Database::SearchItem(const wxString &str)
{
    std::list<Item> ret;

    if (str.empty())
        return ret;

    for (auto it = item.begin(); it != item.end(); it++) {
        if (it->name.Contains(str) || it->id.Contains(str))
            ret.push_back(*it);
    }
    return ret;
}

Item Database::SearchItemByCode(const wxString &str)
{
    if (str.empty())
        return Item();

    for (auto it = item.begin(); it != item.end(); it++) {
        if (it->id == str)
            return *it;
    }

    return Item();
}
