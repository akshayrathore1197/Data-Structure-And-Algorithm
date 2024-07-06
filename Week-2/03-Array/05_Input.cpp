#include <iostream>
using namespace std;

void takeInput(int arr[][4], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << "Enter the value for (" << i << ", " << j << ") : ";
            cin >> arr[i][j];
        }
    }
    cout << "Printing 2D Array \n";
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

    int arr[3][4];
    int rowSize = 3;
    int colSize = 4;
    takeInput(arr, rowSize, colSize);

    return 0;
}