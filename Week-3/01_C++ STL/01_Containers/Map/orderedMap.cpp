#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{

    map<int, string> mm;
    mm.insert(make_pair(3, "Akshay"));
    mm.insert(make_pair(1, "Aditya"));
    mm.insert(make_pair(2, "Ravi"));

    map<int, string>::iterator it = mm.begin();
    while (it != mm.end())
    {
        pair<int, string> p = *it;
        cout << p.first << " : " << p.second << endl;
        it++;
    }

    //    ! creation
    // map<string, string> table;

    // table["In"] = "India";

    // table.insert(make_pair("en", "England"));

    // pair<string, string> p;
    // p.first = "br";
    // p.second = "Brazil";
    // table.insert(p);

    // if (table.count("In") != 0)
    // {
    //     puts("Key found ");
    // }
    // else
    // {
    //     puts("Key not found ");
    // }

    // if (table.find("In") != table.end())
    // {
    //     puts("Key found ");
    // }
    // else
    // {
    //     puts("Key not found ");
    // }

    // cout << "Value : " << table.at("In") << endl;
    // table.at("In") = "Bharat";
    // cout << "Value : " << table.at("In") << endl;

    // table["In"] = "Hindustan";
    // cout << "Value : " << table["In"] << endl;

    // map<string, string>::iterator it = table.begin();
    // while (it != table.end())
    // {
    //     pair<string, string> p = *it;
    //     cout << p.first << " : " << p.second << endl;
    //     it++;
    // }

    // cout << "size : " << table.size() << endl;
    // table.clear();
    // cout << "size : " << table.size() << endl;

    // if (table.empty() == true)
    // {
    //     cout << "table is empty ";
    // }
    // else
    // {

    //     cout << "table is not empty ";
    // }

    return 0;
}