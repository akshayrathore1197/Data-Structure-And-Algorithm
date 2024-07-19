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
bool checkPalindrome(char arr[], int size)
{
    int len = countLength(arr, size);
    int i = 0;
    int j = len - 1;

    while (i <= j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{

    char arr[100];
    cin >> arr;
    int size = 100;
    bool ans = checkPalindrome(arr, size);

(ans == false) ? puts("Not a palindrome") : puts("palindrome");

    return 0;
}