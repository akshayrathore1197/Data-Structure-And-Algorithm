#include <bits/stdc++.h>
using namespace std;

void findLastOccurrence(int arr[], int n, int target, int &ansIndex)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
        {
            ansIndex = mid;
            s = mid + 1;
        }
        else if (arr[mid] < target)
        { 
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 20, 30, 40, 50, 60};
    int n = 7;
    int target = 20;
    int ansIndex = -1;
    findLastOccurrence(arr, n, target, ansIndex);
    cout << "last occurrence index : " << ansIndex << endl;

    return 0;
}