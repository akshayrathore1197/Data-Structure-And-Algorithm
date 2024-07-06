#include <iostream>
#include <vector>
using namespace std;
int main()
{

    //! declaring 2D array
    // int arr[3][2];

    // ! initialise
    
    // int arr[3][2] = {
    //     {10, 20},
    //     {30, 40},
    //     {50, 60},
    // };
    // int arr[3][2] = {10, 20, 30, 40, 50, 60};
    // int arr[3][2] = {
    //     10,
    //     20,
    // };

    // ! fill method

    int arr[3][2];
    for (int i = 0; i < 3; i++)
    {
        fill(arr[i], arr[i] + 2, 0);
    }

    int rowSize = 3;
    int colSize = 2;

    // ! traverse

    for (int rowIndex = 0; rowIndex < rowSize; rowIndex++)
    {
        for (int colIndex = 0; colIndex < colSize; colIndex++)
        {
            cout << arr[rowIndex][colIndex] << " ";
        }
        cout << endl;
    }

    return 0;
}