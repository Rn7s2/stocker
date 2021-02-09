#ifndef DATABASE_H
#define DATABASE_H

#include <list>
#include <wx/datetime.h>
#include <wx/string.h>

struct Record {
    Record(const unsigned long &isIn, const wxDateTime &time);

    wxDateTime time;
    unsigned long isIn;
};

struct Item
{
    Item();
    bool isValid();
    bool operator==(const Item &b) const
    {
        if (price != b.price)
            return false;
        if (id != b.id)
            return false;
        if (name != b.name)
            return false;
        if (num != b.num)
            return false;
        if (expiration != b.expiration)
            return false;
        return true;
    }

    double price;
    wxString id;           // 条码
    wxString name;         // 名称
    wxDateTime expiration; // 保质期
    unsigned long num;
    std::list<Record> record; // 出入库记录
};

class Database {
public:
    Database();
    void Write();
    void ModifyItem(const Item &o, const Item &t);
    void InsertItem(const Item &t);
    void DeleteItem(const Item &t);
    std::list<Item> SearchItem(const wxString &str);

public:
    std::list<Item> item;
};

#endif // DATABASE_H
