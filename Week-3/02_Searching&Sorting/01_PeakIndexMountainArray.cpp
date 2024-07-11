#include <bits/stdc++.h>
using namespace std;

int findPeakIndex(vector<int> arr)
{

    int start = 0;
    int size = arr.size();
    int end = size - 1;
    int mid;
    while (start < end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return start;
}

int main()
{

    vector<int> arr = {10, 20, 30, 40, 90, 800, 70, 60, 50, 40, 30, 20, 10};
    auto index = findPeakIndex(arr);
    cout << "index : " << index;

    return 0;
}