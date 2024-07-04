#include <iostream>
using namespace std;

pair<int, int> findTwoSum(int arr[], int size, int target)
{
    pair<int, int> index = make_pair(-1, -1);
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                index.first = arr[i];
                
                index.second = arr[j];
                return index;
            }
        }
    }
    return index;
}
int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;
    int target = 100;
    pair<int, int> ans = findTwoSum(arr, size, target);
    if (ans.first == -1 && ans.second == -1)
    {
        cout << "Pair not found";
    }
    else
    {
        cout << "pair found " << ans.first << ", " << ans.second;
    }

    return 0;
}