#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
int main()
{

vector<int>zero(5);
iota(zero.begin(),zero.end(),5);
for (auto &&i : zero)
{
    cout<<i<<" ";
}


    // vector<int> first;
    // vector<int> second;

    // first.push_back(1);
    // first.push_back(2);
    // first.push_back(3);

    // second.push_back(4);
    // second.push_back(5);
    // second.push_back(6);

    // int ans = inner_product(first.begin(), first.end(), second.begin(), 0);
    // cout << ans << endl;

    // vector<int> arr(5);
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;

    // vector<int> result(arr.size());
    // partial_sum(arr.begin(), arr.end(), result.begin());
    // for (auto i : result)
    // {
    //     cout << i << " ";
    // }

    // int totalSum = accumulate(arr.begin(), arr.end(), 0);
    // cout << totalSum << endl;

    return 0;
}