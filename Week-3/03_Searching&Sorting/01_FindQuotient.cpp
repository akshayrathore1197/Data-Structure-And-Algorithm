
// without using "/" , "%"

#include <bits/stdc++.h>
using namespace std;

int getQuotient(int dividend, int divisor)
{

    int s = 0;
    int e = dividend;
    int mid = (s + (e - s) >> 1);
    int ans = -1;

    while (s <= e)
    {
        if ((divisor * mid) == dividend)
        {
            return mid;
        }
        if ((divisor * mid) < dividend)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + (e - s) >> 1);
    }
}

int main()
{

    int dividend = -10;
    int divisor = 2;
    int ans = getQuotient(abs(dividend), abs(divisor));

    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
    {
        ans = 0 - ans;
    }
    cout << "Final ans : " << ans << endl;

    return 0;
}