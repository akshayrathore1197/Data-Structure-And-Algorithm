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

void toUpperCase(char arr[], int size)
{
    int n = countLength(arr, size);
    for (int i = 0; i < n; i++)
    {
        char ch = arr[i];
        if (arr[i] >= 97) // (ch >= 'a'&&ch<='z')
        {

            ch = ch - 'a' + 'A';
        }
        // ch = ch - 32;
        arr[i] = ch;
    }
    cout << arr;
}

int main()
{

    char arr[100];
    cin >> arr;
    int size = 100;
    toUpperCase(arr, size);

    return 0;
}