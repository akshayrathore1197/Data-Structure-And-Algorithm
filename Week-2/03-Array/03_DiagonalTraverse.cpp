#include<iostream>
using namespace std;void diagonalTraverse(int arr[][4], int size)
{

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i][i] << " ";
    // }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
   
        int arr[4][4] = {
        {10, 20, 30, 40},
        {40, 30, 20, 10},
        {50, 60, 70, 80},
        {80, 70, 60, 50},
    };
    int rowSize = 4;
    int colSize = 4;
    diagonalTraverse(arr, rowSize);
return 0;
}