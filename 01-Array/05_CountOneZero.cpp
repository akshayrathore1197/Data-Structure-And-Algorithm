#include <iostream>
using namespace std;

void countOneZero(int arr[], int size)
{
    int countZero = 0;
    int countOne = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            countZero++;
        }
        if (arr[i] == 1)
        {
            countOne++;
        }
    }
    cout << "Total Zero's are " << countZero<<endl;
    cout << "Total One's are " << countOne;
}

int main()
{

    int arr[] = {1, 1, 0, 0, 0, 1, 0, 1, 1, 1};
    int size = 10;

    countOneZero(arr, size);

    return 0;
}