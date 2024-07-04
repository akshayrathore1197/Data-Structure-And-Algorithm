#include <iostream>
using namespace std;
int findUniqueNum(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{

    int arr[] = {2, 4, 5, 6, 5, 2, 4};
    int size = 7;
    int ans = findUniqueNum(arr, size);
    cout << "Unique number is : " << ans;

    return 0;
}