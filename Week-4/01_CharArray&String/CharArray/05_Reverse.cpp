#include <bits/stdc++.h>
using namespace std;

int countLength(char arr[], int size)
{
    int count = 0;
    int index = 0;
    while (arr[index] != 0)
    {
        while (arr[index] != 0)
        {
            count++;
            index++;
        }
    }
    return count;
}

void reverseCharArray(char arr[], int size)
{
    int len = countLength(arr, size);

    int i = 0;
    int j = len - 1;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{

    char arr[100];
    cin >> arr;

    cout << "Before " << arr << endl;
    reverseCharArray(arr, 100);
    cout << "After " << arr << endl;

    return 0;
}