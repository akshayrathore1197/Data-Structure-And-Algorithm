#include <iostream>
using namespace std;
int main()
{
    cout << (5 & 3) << endl;
    cout << (5 | 3) << endl;
    cout << ~(5) << endl;
    cout << (5 ^ 5) << endl;
    cout << (5 ^ 5 ^ 8) << endl;
    cout << (25 << 1) << endl;
    cout << (~(10) << 1) << endl;
    cout << (~(10) >> 1) << endl;

    puts("\nAll Done");
    return 0;
} 