#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(vector<int> &arr)
{
    int size = arr.size();
    int min_idx;
    for (int i = 0; i < size - 1; i++)
    {

        min_idx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            swap(arr[min_idx], arr[i]);
        }
    }
}

int main()
{

    vector<int> arr = {9, 58, 43, 8, 3, 8, 34, 78, 4, 378, 33};
    selectionSort(arr);
    print(arr);

    return 0;
}