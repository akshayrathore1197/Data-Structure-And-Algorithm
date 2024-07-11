#include <iostream>
#include <stack>
using namespace std;
int main()
{

    stack<int> first;
    stack<int> second;

    first.push(10);
    first.push(20);
    first.push(30);
    first.push(40);

    second.push(100);
    second.push(200);
    second.push(300);
    second.push(400);

    first.swap(second);

    cout << "top : " << first.top() << endl;
    cout << "top : " << second.top() << endl;

    // stack<int> st;
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);

    // cout << "size : " << st.size() << endl;

    // st.pop();
    // cout << "size : " << st.size() << endl;

    // cout << "top : " << st.top()<<endl;

    // st.pop();
    // cout << "top : " << st.top()<<endl;
    // cout << "size : " << st.size() << endl;

    //  if (st.empty() == true)
    // {
    //     cout << "stack is empty ";
    // }
    // else
    // {

    //     cout << "stack is not empty ";
    // }

    return 0;
}