#include <iostream>
using namespace std;
void diagonalSum(int arr[][4], int size)
{

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = arr[i][i] + sum;
    }
    cout << "Normal : " << sum;
}

void altDiagonalTraverse(int arr[][4], int size)
{
    int sum = 0;
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {

                if ((i + j) == size - 1)
                {
                    sum = sum + arr[i][j];
                }
            }
        }
    }
    cout << "Alternative : " << sum;
}
int main()
{

    int arr[4][4] = {
        {10, 20, 30, 40},
        {40, 30, 20, 10},
        {50, 60, 70, 80},
        {60, 70, 60, 50},
    };
    int rowSize = 4;
    int colSize = 4;
    diagonalSum(arr, rowSize);
    cout << endl;
    altDiagonalTraverse(arr, rowSize);
    return 0;
}