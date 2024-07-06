#include <iostream>
#include <climits>
using namespace std;
int findMaximum(int arr[][3], int rowSize, int colSize)
{
    // int max = arr[0][0];
    int max = INT_MIN;

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}
int main()
{
    int arr[3][3] = {
        {70, 23, 41},
        {27, 90, 42},
        {56, 12, 18}};
    int rowSize = 3;
    int colSize = 3;
    int ans = findMaximum(arr, rowSize, colSize);

    cout << "Maximum is " << ans;

    return 0;
}