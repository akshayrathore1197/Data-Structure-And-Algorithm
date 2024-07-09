#include <bits/stdc++.h>
using namespace std;
int main()
{

    // ! forward iterator
    // forward_list<int> list;
    // list.push_front(10);
    // list.push_front(20);
    // list.push_front(30);

    // forward_list<int>::iterator it = list.begin();
    // while (it != list.end())
    // {
    //     *it = *it + 5;
    //     it++;
    // }

    // it = list.begin();
    // while (it != list.end())
    // {
    //     cout << *it << " ";
    //     it++;
    // }

    // ! bi-directional iterator

    // list<int> myList;
    // myList.push_back(10);
    // myList.push_back(20);
    // myList.push_back(30);

    // list<int>::iterator it = myList.begin();
    // while (it != myList.end())
    // {
    //     *it = *it+2;
    //     cout<<*it<<" ";
    //     it++;
    // }
    // cout<<endl;

    // list<int>::iterator it2 = myList.end();
    //   while (it2 != myList.begin())
    // {
    //     it2--;
    //     *it2 = *it2+2;
    //     cout<<*it2<<" ";
    // }

    // ! random access iterator
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70};
    vector<int>::iterator it = arr.begin();

    while (it != arr.end())
    {
        *it = *it + 5;
        cout << *it << " ";
        it++;
    }
    cout << endl;
    vector<int>::iterator it2 = arr.end();
    while (it2 != arr.begin())
    {
        it2--;
        cout << *it2 << " ";
    }
    cout<<endl;
    vector<int>::iterator it3 = arr.begin() + 2;
    while (it3 != arr.end())
    {
        cout << *it3 << " ";
        it3++;
    }

    return 0;
}