#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // ! iterator

    vector<int> hello;
    hello.push_back(11);
    hello.push_back(21);
    hello.push_back(31);
    hello.push_back(41);

    vector<int>::iterator it = hello.begin();

    while (it != hello.end())
    {
        cout << *it << " ";

        it++;
    }

    // ! swap vector
    // vector<int> first;
    // vector<int> second;

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

    // first.swap(second);
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << first[i] << " ";
    // }

    // vector<int> marks;

    // ! insertion
    // marks.push_back(10);
    // marks.push_back(20);
    // marks.push_back(30);
    // marks.push_back(40);

    // cout << "Size : " << marks.size() << endl;
    // cout << "Capacity : " << marks.capacity() << endl;

    // ! erase in range
    // marks.erase(marks.begin(), marks.end()-2);
    // marks.erase(marks.begin(), marks.end());
    // cout << "Size : " << marks.size() << endl; 
    // cout << "Capacity : " << marks.capacity() << endl;

    // ! insert at any position
    // marks.insert(marks.begin(), 15);
    // marks.insert(marks.begin() + 4, 55);

    // cout << "index : " << marks[0] << endl;
    // cout << "index : " << marks[4] << endl;
    // cout << "Capacity : " << marks.capacity() << endl;

    // ! remove all element
    //     marks.clear();
    //   cout << "Size : " << marks.size() << endl;

    // ! maximum size 
    // *  maximum size that the system allows a vector to hold
    // vector<int> max;
    // cout << "maximum : " << max.max_size() << endl;
    // cout << "Size : " << res.size() << endl;
    // cout << "Capacity : " << res.capacity() << endl;

    // ! set minimum capacity
    // vector<int> res;
    // res.reserve(10);
    // cout << "Size : " << res.size() << endl;
    // cout << "Capacity : " << res.capacity() << endl;

    // ! capacity
    // marks.push_back(50);
    // marks.push_back(60);
    // cout << "Size : " << marks.size() << endl;
    // cout << "Capacity : " << marks.capacity() << endl;

    // ! index []
    //* To use [], that element must exist in the vector.
    // cout<<"index : "<<marks[6]<<endl;
    // cout<<"index : "<<marks[0]<<endl;
    // cout<<"at method : "<<marks.at(2)<<endl;

    // marks[0]=100;
    // cout<<"index : "<<marks[0]<<endl;

    // ! check if empty
    // if (marks.empty() == true)
    // {
    //     puts("vector is empty");
    //
    // else
    // {
    //     puts("Vector is not empty");
    // }

    // ! removal
    // marks.pop_back();
    // cout << "Size : " << marks.size() << endl;

    // cout << "front : " << marks.front() << endl;
    // cout << "back : " << marks.back() << endl;

    // ! creation
    // vector<int> marks;

    // cout << *(marks.begin()) << endl; // Using marks.begin() gives the first value of the vector, and using * gives the value inside it.

    //     vector<int>miles(10);

    //     vector<int>distance(15,0);

    return 0;
}