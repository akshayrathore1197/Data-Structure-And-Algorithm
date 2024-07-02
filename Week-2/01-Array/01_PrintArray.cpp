#include <iostream>
using namespace std;

void pairArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {10, 30, 50, 70, 90};
    int size = 5;

    pairArray(arr, size);

    return 0;
}