#include <iostream>
using namespace std;

void printPrime()
{
    bool is_prime;

    for (int i = 2; i <= 100; i++)
    {
        is_prime = true;

        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    printPrime();

    return 0;
}