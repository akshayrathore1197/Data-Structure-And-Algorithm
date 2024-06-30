#include <iostream>
using namespace std;

void extremePrint(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        cout << arr[left] << " ";
        left++;
        if (right > left)
        {

            cout << arr[right] << " ";
            right--;
        }
    }
}
int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;
    extremePrint(arr, size);

    return 0;
}