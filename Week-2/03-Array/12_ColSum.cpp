#include <iostream>
using namespace std;

void findColSum(int arr[][3], int rowSize, int colSize)
{

    for (int i = 0; i < rowSize; i++)
    {
        int sum = 0;
        for (int j = 0; j < colSize; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << endl;
    }
}
int main()
{

    int arr[3][3] = {
        {70, 23, 41},
        {27, 90, 42},
        {56, 12, 18}};
    int rowSize = 3;
    int colSize = 3;

    findColSum(arr, rowSize, colSize);

    return 0;
}