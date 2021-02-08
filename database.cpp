#include "database.h"

#include <wx/datetime.h>
#include <wx/textfile.h>
#include <wx/tokenzr.h>

Record::Record(const unsigned long &isIn, const wxDateTime &time)
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
			unsigned long isIn;

			str = tkz.GetNextToken();
			str.ToULong(&isIn);

			str = tkz.GetNextToken();
			date.ParseISODate(str);

			if (isIn)
				tmp.record.emplace_back(1, date);
			else
				tmp.record.emplace_back(0, date);
		}

		item.push_back(tmp);
	}

	file.Close();
}

// TODO: 入操作
void Database::Write()
{

}

// TODO: 修改已存在条目
void Database::ModifyItem(const Item &o, const Item &t)
{
	// 修改
	Write();
}

// TODO: 插入新条目
void Database::InsertItem(const Item &t)
{
	item.push_back(t);

	wxTextFile file;
	if (!file.Open(wxT("database.db"))) {
		file.Create();
	}

	wxString str(wxEmptyString);
	str << t.id << '|';
	str << t.name << '|';
	str << t.num << '|';
	str << t.price << '|';
	str << t.expiration.FormatISODate() << '|';

	std::list<Record>::iterator it;

	for(auto v : t.record) {
		str << v.isIn << '|';
		str << v.time.FormatISODate() << '|';
	}
	file.AddLine(str);
	file.Write();
	file.Close();
}

void Database::DeleteItem(const Item &t)
{
	item.remove(t);
	Write();
}

// TODO: 根据提供的str, 匹配所有名字和条码包含str的项目。
std::list<Item> Database::SearchItem(const wxString &str)
{

}
