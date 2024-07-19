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

bool myComp(int &a, int &b)
{
    return a > b;
}

int main()
{

    vector<int> arr = {90, 508, 413, 58, 3, 8, 34, 78, 84, 378, 33};
    // sort(arr.begin(), arr.end());
    sort(arr.begin(), arr.end(), myComp);
    print(arr);

    return 0;
}