#include <bits/stdc++.h>
using namespace std;
class comparator
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

int main()
{

    vector<int> arr;
    arr.push_back(20);
    arr.push_back(10);
    arr.push_back(30);

    sort(arr.begin(), arr.end(),comparator());
    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}