#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, int> deskMap;

    deskMap[1] = 53;
    deskMap[2] = 54;
    deskMap[3] = 55;

    deskMap[2] = 57;

    unordered_map<int, int>::iterator it;

    // for (it = deskMap.begin(); it != deskMap.end(); it++)
    // {
    //     int key = it->first;
    //     int value = it->second;
    //     cout << "Key : " << key << " & " << "value : " << value << endl;
    // }
    // cout << endl;
    puts("before ");
    for (auto it : deskMap)
    {
        int key = it.first;
        int value = it.second;
        cout << "Key : " << key << " & " << "value : " << value << endl;
    }

    /*


/////////////////////////////////////////////////////

    */

    if (deskMap.find(2) != deskMap.end())
    {
        int value = deskMap[2];
        cout << "found value is " << value << endl;
    }
    else
    {
        puts("Not found");
    }cout<<endl;

    /*

/////////////////////////////////////////////////////

  */

    deskMap.erase(2);
    puts("after ");
    for (it = deskMap.begin(); it != deskMap.end(); it++)
    {
        int key = it->first;
        int value = it->second;
        cout << "Key : " << key << " & " << "value : " << value << endl;
    }
    cout << endl;
    if (deskMap.find(2) != deskMap.end())
    {
        int value = deskMap[2];
        cout << "found value is " << value << endl;
    }
    else
    {
        puts("Not found");
    }
    return 0;
}