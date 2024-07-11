
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main()
{

    int a = 10;
    int b = 15;
    cout << "min : " << min(a, b) << endl;
    cout << "max : " << max(a, b) << endl;

        vector<int> arr(5);
    arr[0] = 100;
    arr[1] = 80;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    auto it = min_element(arr.begin(),arr.end());
    cout<<*it<<endl;
    auto it2 = max_element(arr.begin(),arr.end());
    cout<<*it2<<endl;

    return 0;
}