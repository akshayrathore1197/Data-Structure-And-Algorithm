#include <iostream>
#include <climits>
using namespace std;
int findMinimum(int arr[][3], int rowSize, int colSize)
{
    // int min = arr[0][0];
    int min = INT_MAX;

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}
int main()
{
    int arr[3][3] = {
        {70, 23, 41},
        {27, 9, 42},
        {56, 12, 18}};
    int rowSize = 3;
    int colSize = 3;
    int ans = findMinimum(arr, rowSize, colSize);

    cout << "minimum is " << ans;

    return 0;
}