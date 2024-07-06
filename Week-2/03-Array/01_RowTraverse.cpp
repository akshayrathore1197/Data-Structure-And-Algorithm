#include <iostream>
using namespace std;
void rowTraverse(int arr[][4], int rowSize, int colSize)
{
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
    int arr[4][4] = {
        {10, 20, 30, 40},
        {40, 30, 20, 10},
        {50, 60, 70, 80},
        {80, 70, 60, 50},
    };
    int rowSize = 4;
    int colSize = 4;
    rowTraverse(arr, rowSize, colSize);

    return 0;
}