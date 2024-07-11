#include <iostream>
#include <queue>
using namespace std;
int main()
{

    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    dq.push_back(100);
    dq.push_back(200);
    dq.push_back(300);

    cout << "index : " << dq[1] << endl;
    cout << "index : " << dq.at(4) << endl;

    cout << "size : " << dq.size() << endl;

    dq.clear();
    cout << "size : " << dq.size() << endl;

    dq.insert(dq.begin(), 103);
    cout << "index : " << dq[0] << endl;
    cout << "size : " << dq.size() << endl;

    // deque<int>::iterator it = dq.begin();
    // while (it != dq.end())
    // {
    //     cout << *it << " ";
    //     it++;
    // }

    //   dq.pop_front();
    //   dq.pop_back();

    //   cout<<"size : "<<dq.size()<<endl;

    //   cout<<"front : "<<dq.front()<<endl;
    //   cout<<"back : "<<dq.back()<<endl;

    //    if (dq.empty() == true)
    //     {
    //         cout << "deque is empty ";
    //     }
    //     else
    //     {

    //         cout << "deque is not empty ";
    //     }

    return 0;
}