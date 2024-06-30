#include <iostream>
using namespace std;
int findTarget(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[100];
    cout << "Enter array elements : \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target element : ";
    cin >> target;

    int ans = findTarget(arr, size, target);

    if (ans == -1)
    {
        cout << "Target Not found";
    }
    else
    {
        cout << "Target Found at index : " << ans;
    }

    return 0;
}