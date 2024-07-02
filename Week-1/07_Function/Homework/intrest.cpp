#include <iostream>
using namespace std;
int findInterest(int principal, int rate, int time)
{
    int simple_interest;
    simple_interest = (principal * rate * time) / 100;
    return simple_interest;
}

int main()
{

    // SI = (P × R × T) / 100
    int principal = 400000, rate = 6, time = 3;

    int SI = findInterest(principal, rate, time);
    cout << "Simple Interest : " << SI;

    return 0;
}