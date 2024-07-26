#include <iostream>
using namespace std;
int main()
{

    // int arr[2][2] = {{2, 2}, {3, 3}};

    int **arr = new int *[4];

    for (int i = 0; i < 4; i++)
    {
        arr[i] = new int[3];
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        delete[] arr[i];
    }

    // int arr[5] = {0};
    // int *brr = new int[5];

    // int a = 10;
    // cout << a << endl;

    // int *p = new int;
    // *p = 5;
    // cout << *p << endl;

    // delete p;

    return 0;
}