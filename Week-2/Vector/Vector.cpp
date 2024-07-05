#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << endl;
    }
}

int main()
{

    // vector<int> v;

    // // !insert
    // v.push_back(1);
    // v.push_back(10);
    // v.push_back(11);
    // print(v);

    // cout << endl;

    // // !pop (delete)
    // v.pop_back();
    // v.pop_back();

    // print(v);

    vector<int> arr1; // default with no data , 0 size
    print(arr1);
    cout << endl;
    vector<int> arr2(5, -1); // initialize with n size with specific data
    print(arr2);
    cout << endl;
    vector<int> arr3 = {1, 2, 3, 4, 5};
    print(arr3);
    cout << endl;
    vector<int> arr4{1, 2, 3, 4};
    print(arr4);
    cout << endl;

    vector<int> arr5 = {1, 2, 3, 4, 5, 6};
    vector<int> arr6(arr5);
    print(arr6);
   cout << endl;
    return 0;
}