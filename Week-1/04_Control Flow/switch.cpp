#include <iostream>
using namespace std;
int main()
{

    char grade;
    cout << "Enter your grade : ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        puts(" Grade A ");
        break;
    case 'B':
        puts(" Grade B ");
        break;
    case 'C':
        puts(" Grade C ");
        break;
    case 'D':
        puts(" Grade D ");
        break;

    default:
        puts("Tu fail ho gaya");
        break;
    }

    return 0;
}