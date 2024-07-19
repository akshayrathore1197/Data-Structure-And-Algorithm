#include <bits/stdc++.h>
using namespace std;

int findOddOccurringElem(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid;

    while (s <= e)
    {
        mid = (s + e) / 2;
        if (s == e)
        {
            return s;
        }
        if (mid - 1 >= 0 && arr[mid] != arr[mid - 1] && mid + 1 < size && arr[mid] != arr[mid + 1])
        {
            return mid;
        }

        if (mid - 1 >= 0 && arr[mid] == arr[mid - 1])
        {
            int pairStartingIndex = mid - 1;
            if (pairStartingIndex & 1)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else if (mid + 1 < size && arr[mid] == arr[mid + 1])
        {
            int pairStartingIndex = mid - 1;
            if (pairStartingIndex & 1)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
    }
}
int main()
{

    int arr[] = {0,0,2,2,5,3,3};
    int size = 7;

    int ans = findOddOccurringElem(arr, size);
    cout << "ans Index : " << ans << endl;
    cout << "ans Element : " << arr[ans] << endl;

    return 0;
}