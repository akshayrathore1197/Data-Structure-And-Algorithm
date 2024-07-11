#include <iostream>
#include <queue>
using namespace std;
int main()
{

    priority_queue<int, vector<int>, greater<int>> qq;
    // * min-heap -> minimum value -> highest priority

    qq.push(10);
    qq.push(20);
    qq.push(15);
    qq.push(75);
    qq.push(45);

    cout<<"top : "<<qq.top()<<endl;
    qq.pop();
    cout<<"top : "<<qq.top()<<endl;

    return 0;
}