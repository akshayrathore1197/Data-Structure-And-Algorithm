#include <bits/stdc++.h>
using namespace std;

void countLength(char arr[], int size)
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
    cout << "length " << count;
}

int main()
{
    cout << "Enter input \n";
    char arr[100];
    cin.getline(arr, 100);
    int size = 100;
    countLength(arr, size);

    return 0;
}