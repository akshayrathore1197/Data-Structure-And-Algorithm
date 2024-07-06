#include <iostream>
using namespace std;

void transposeMatrix(int arr[][3], int rowSize, int colSize)
{
    // int temp[25][25];
    // for (int i = 0; i < rowSize; i++)
    // {
    //     for (int j = 0; j < colSize; j++)
    //     {
    //         temp[i][j] = arr[j][i];
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < rowSize; i++)
    // {
    //     for (int j = 0; j < colSize; j++)
    //     {
    //         cout << temp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = i; j < colSize; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int arr[3][3] = {
        {10, 11, 12},
        {20, 21, 22},
        {30, 31, 32},
    };

    int rowSize = 3;
    int colSize = 3;
    transposeMatrix(arr, rowSize, colSize);

    return 0;
}