#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main()
{

    vector<int> first;
    vector<int> second;

    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(6);

    second.push_back(1);
    second.push_back(2);
    second.push_back(8);
    second.push_back(6);

    vector<int> result;

    set_symmetric_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));
    for (int i : result)
    {
        cout << i << " ";
    }
    
    // set_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));
    // for (int i : result)
    // {
    //     cout << i << " ";
    // }

    // set_intersection(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));

    // for (int i : result)
    // {
    //     cout << i << " ";
    // }

    // set_union(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));

    // for (int i : result)
    // {
    //     cout << i << " ";
    // }
    return 0;
}