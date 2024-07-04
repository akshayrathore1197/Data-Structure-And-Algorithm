#include <iostream>
#include <algorithm>
using namespace std;

int countZero = 0;

void inBuiltSortFunc(int arr[], int size)
{
    sort(arr, arr + size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void useFillMethod(int arr[], int size)
{
    fill(arr, arr + countZero, 0);
    fill(arr + countZero, arr + size, 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void sortOneZero(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            countZero++;
        }
    }

    for (int i = 0; i < countZero; i++)
    {
        arr[i] = 0;
    }
    for (int i = countZero; i < size; i++)
    {
        arr[i] = 1;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0};
    int size = 11;

    cout << "\nUsing Funciton \n";
    sortOneZero(arr, size);
    cout << endl;
    cout << "\nUsing in-built-sort-method\n";
    inBuiltSortFunc(arr, size);
    cout << endl;
    cout << "\nUsing Fill method \n";
    useFillMethod(arr, size);

    return 0;
}