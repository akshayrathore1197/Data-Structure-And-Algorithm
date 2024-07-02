#include <iostream>
using namespace std;
int main()
{
    cout << "Pre and Post operator\n";
    int a1 = 5;
    cout << "Post inc. " << (a1++) << endl;
    cout << "current value : " << a1 << endl;
    cout << endl;

    int b1 = 5;
    cout << "Post dec. " << (b1--) << endl;
    cout << "current value : " << b1 << endl;
    cout << endl;

    int c = 5;
    cout << "Pre inc. " << (++c) << endl;
    cout << "current value : " << c << endl;
    cout << endl;

    int d = 5;
    cout << "Pre dec. " << (--d) << endl;
    cout << "current value : " << d << endl;
    cout << endl;

    int a = 10, b = 5;
    // !Arithmetic operator
    cout << "arithmetic operator\n";
    cout << (a + b) << endl;
    cout << (a - b) << endl;
    cout << (a * b) << endl;
    cout << (a / b) << endl;
    cout << (a % b) << endl; // it is heavy operation avoid using it
    cout << endl;

    // !Relational operator
    cout << "Relational operator\n";
    cout << (a < b) << endl;
    cout << (a > b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;
    cout << (a == b) << endl;
    cout << endl;

    // !Logical operator
    cout << "Logical operator\n";
    bool bool1 = true;
    bool bool2 = true;
    bool bool3 = false;

    if (bool1 && bool2)
        cout << "Logical And" << endl;
    if (bool1 || bool3)
        cout << "Logical Or" << endl;
    if (!false)
        cout << "Logical Not" << endl;
    cout << endl;

    //   !Assignment operator
    cout << "Assignment operator\n";
    int arr = 5;
    cout << arr << endl;
    cout << (arr += 10) << endl;
    cout << (arr -= 1) << endl;
    cout << (arr *= 2) << endl;
    cout << (arr /= 2) << endl;
    cout << endl;

    // ! Bitwise operator
    cout << "Bitwise operator\n";
    cout << (5 & 4) << endl;
    cout << (5 | 4) << endl;
    cout << (~1) << endl;   // tilda
    cout << (5 << 4) << endl; //leftshit
    cout << (10 >> 2) << endl; //rightshit
    cout <<(5^5)<<endl;//XOR 

    return 0;
}