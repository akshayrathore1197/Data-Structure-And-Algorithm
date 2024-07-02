#include <iostream>
using namespace std;

int Vote(int age)
{

    if (age >= 18)
    {
        return 1;
    }
  
   
}

int main()
{
    int age;
    cout << "Enter  your age : ";
    cin >> age;

    int ans = Vote(age);
    if (ans == 1)
    {
        cout << "You can vote";
    }
    else
    {
        cout << "You cannot vote";
    }

    return 0;
}