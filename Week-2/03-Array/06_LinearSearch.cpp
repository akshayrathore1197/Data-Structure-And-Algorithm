#include <iostream>
using namespace std;

void searchTarget(int arr[][4], int rowSize, int colSize, int target)
{
    int flag = 0;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (arr[i][j] == target)
            {
                flag = 1;
                cout << "Target Found at " << i << ", " << j<<endl;
            }
      
        }
    }
    if (flag == 0)
    {
        cout << "Target not found ";
    }
}

int main()
{

    int arr[4][4] = {
        {10, 20, 30, 40},
        {05, 10, 15, 20},
        {50, 60, 70, 80},
        {11, 22, 33, 44},
    };
    int rowSize = 4;
    int colSize = 4;
    int target = 10;

    searchTarget(arr, rowSize, colSize, target);

    return 0;
}