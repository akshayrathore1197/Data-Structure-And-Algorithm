#include <iostream>
using namespace std;
void printCounting()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }
}
int sum(int a, int b)
{
    int total = a + b;
    return total;
}

void sayMyname();

int main()
{
    printCounting();
    cout << "Sum " << sum(5, 7)<<endl;
    sayMyname();
    return 0;
}
void sayMyname()
{
    cout << "Akshay\n";
}