#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printDouble(int a)
{
    cout << a * 2 << " ";
}
int checkEven(int a)
{
    return a % 2 == 0;
}

int main()
{

    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 19;
    arr[2] = 33;
    arr[3] = 54;
    arr[4] = 50;

    auto it = partition(arr.begin(), arr.end(), checkEven);
    for (auto a : arr)
    {
        cout << a << " ";
    }

    // auto it = unique(arr.begin(), arr.end());
    // arr.erase(it, arr.end());
    // for (auto a : arr)
    // {
    //     cout << a << " ";
    // }

    // cout << "Before\n";

    // for (auto a : arr)
    // {
    //     cout << a << " ";
    // }

    // cout << endl;

    // rotate(arr.begin(), arr.begin() + 3, arr.end());

    // cout << "After\n";
    // for (auto a : arr)
    // {
    //     cout << a << " ";
    // }
    // cout << endl;

    // sort(arr.begin(), arr.end());
    // for (auto a : arr)
    // {
    //     cout << a << " ";
    // }

    // cout << endl;

    // reverse(arr.begin(), arr.end());
    // for (auto a : arr)
    // {
    //     cout << a << " ";
    // }

    // int target = 10;
    // int ans = count(arr.begin(), arr.end(), target);
    // cout << ans << endl;

    // int ans = count_if(arr.begin(), arr.end(), checkEven);
    // cout << ans << endl;

    // for_each(arr.begin(), arr.end(), printDouble);

    // int target = 40;
    // auto it = find(arr.begin(), arr.end(), target);
    // cout << *it << endl;

    // auto it = find_if(arr.begin(), arr.end(), checkEven);
    // cout << *it << endl;

    return 0;
}