#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = 9;
    int target = 60;

    bool ans = binary_search(arr, arr + n, target);
    cout << ans << endl;

    return 0;
}  