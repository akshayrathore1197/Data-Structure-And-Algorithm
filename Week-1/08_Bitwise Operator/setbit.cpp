#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter number : ";
    cin >> n;

    int totalBit = 0;
    while (n != 0)
    {
        int lastbit = (n & 1); 
        if (lastbit == 1)
        {
            totalBit++;
        }
        n = n >> 1;
    }
    cout << "Total set bit : " << totalBit << endl;

    return 0;
}