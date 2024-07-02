#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter number : ";
    cin >> n;

    // if ((n & 1) == 0)
    // {
    //     puts("Even Number");
    // }
    // else
    // {
    //     puts("Odd Number");
    // }
 

    if(n&1){
      
          puts("Odd Number ");
    }
    else{
        puts("Even Number ");
    }

    return 0;
}