#include <iostream>
#include <climits>
using namespace std;

int findMax(int arr[], int size)
{
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }
    return max;
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

    int max = findMax(arr, size);
    cout << "Maximum elemnt is " << max;

    return 0;
}