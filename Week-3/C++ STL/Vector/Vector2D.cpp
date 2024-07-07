#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<vector<int>> brr(4);
    brr[0] = vector<int>(4);
    brr[1] = vector<int>(2);
    brr[2] = vector<int>(5);
    brr[3] = vector<int>(3);
    int totalRow = brr.size();
    int colSize = brr[0].size();

    // vector<vector<int>> arr(5,vector<int>(4,0));
    // int totalRow = arr.size();
    // int totalCol = arr[0].size();

    return 0;
}