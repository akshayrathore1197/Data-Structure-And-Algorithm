#include <iostream>
#include <queue>
using namespace std;
int main()
{

    priority_queue<int> pp;
    // * max-heap -> maximum value -> highest priority

    pp.push(10);
    pp.push(20);
    pp.push(15);
    pp.push(75);
    pp.push(45);

    cout << "size : " << pp.size() << endl;
    cout << "top : " << pp.top() << endl;

    pp.pop();

    cout << "size : " << pp.size() << endl;

    cout << "top : " << pp.top() << endl;


    return 0;

}