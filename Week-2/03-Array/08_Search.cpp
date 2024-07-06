#include <iostream>
#include <vector>
using namespace std;

void searchTarget(vector<vector<int>> arr, int target)
{
    int rowSize = arr.size();
    int colSize = arr[0].size();
    int flag = 0;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (arr[i][j] == target)
            {
                flag = 1;
                cout << "Target Found at " << i << ", " << j << endl;
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

    vector<vector<int>> arr(4, vector<int>(3, 0));
    int rowSize = arr.size();
    int colSize = arr[0].size();

    cout << "Enter \n";
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cin >> arr[i][j];
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

    cout << "Enter target : ";
    int target;
    cin >> target;

    searchTarget(arr, target);

    return 0;
}