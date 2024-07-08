#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> hello;

    hello.push_back(10);
    hello.push_back(20);
    hello.push_back(30);
    hello.push_back(40);

    hello.insert(hello.begin(), 100);

    list<int>::iterator it = hello.begin();
    while (it != hello.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    hello.erase(hello.begin(), hello.end());
    cout << "Size : " << hello.size() << endl;

    // list<int> first;
    // list<int> second;

    // first.push_back(10);
    // first.push_back(20);
    // first.push_back(30);
    // first.push_back(40);

    // second.push_back(100);
    // second.push_back(200);
    // second.push_back(300);
    // second.push_back(400);

    // first.swap(second);
    // for (int i : first)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // for (int i : second)
    // {
    //     cout << i << " ";
    // }

    // list<int> myList;

    // myList.push_back(10);
    // myList.push_back(20);
    // myList.push_back(30);
    // myList.push_back(40);
    // myList.push_back(10);

    // myList.push_front(100);
    // myList.push_front(200);
    // cout << "Size : " << myList.size() << endl;

    // myList.remove(10);

    // list<int>::iterator it = myList.begin();
    // while (it != myList.end())
    // {
    //     cout << *it << " ";
    //     it++;
    // }

    // myList.pop_back();
    // myList.pop_front();

    // cout << "Size : " << myList.size() << endl;

    // cout << "front : " << myList.front() << endl;
    // cout << "back : " << myList.back() << endl;

    // myList.clear();
    // cout << "Size : " << myList.size() << endl;

    // if (myList.empty() == true)
    // {
    //     cout << "list is empty ";
    // }
    // else
    // {

    //     cout << "list is not empty ";
    // }

    return 0;
}