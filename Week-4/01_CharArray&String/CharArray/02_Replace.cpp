#include <bits/stdc++.h>
using namespace std;

void replace(char arr[], int size)
{

    for (int index = 0; index < size; index++)
    {
        if (arr[index] == '@')
        {
            arr[index] = ' ';
        }
    }
    cout << arr;
}

int main()
{

    char arr[100];
    int size = 100;
    cin >> arr;

    replace(arr, size);

    return 0;
}