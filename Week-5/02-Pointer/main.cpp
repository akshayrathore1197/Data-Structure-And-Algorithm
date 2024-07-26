#include <bits/stdc++.h>
using namespace std;

// ! array jab bhi pass hoga pointer k form m hoga
void fSize(int *arr, int size)
{
    cout << arr << endl;
    cout << "size " << sizeof(arr) << endl;
}

int main()
{

    int a = 50;
    int *p = &a;
    int **q = &p;
    int **r = q;
    int ***s = &q;

    cout << (a) << endl;
    cout << (&a) << endl;
    // cout<<(*a)<<endl;
    cout << (p) << endl;
    cout << (&p) << endl;
    cout << (*p) << endl;
    cout << (q) << endl;
    cout << (&q) << endl;
    cout << (*q) << endl;
    cout << (**q) << endl;
    cout << (&r) << endl;
    cout << (r) << endl;
    cout << (*r) << endl;
    cout << (**r) << endl;
    cout << (s) << endl;
    cout << (*s) << endl;
    cout << (**s) << endl;
    cout << (***s) << endl;

    // int a = 10;
    // int *p = &a;
    // int **q = &p;

    // cout << (a) << endl;
    // cout << (&a) << endl;
    // // cout << (*a) << endl;
    // cout << (p) << endl;
    // cout << (&p) << endl;
    // cout << (*p) << endl;
    // // cout << (**p) << endl;
    // cout << (q) << endl;
    // cout << (&q) << endl;
    // cout << (*q) << endl;
    // cout << (**q) << endl;
    // // cout << (***q) << endl;

    // int a = 5;
    // int *p = &a;
    // int *q = p;

    // cout << (a) << endl;
    // cout << (&a) << endl;
    // // cout << (*a) << endl;
    // cout << (p) << endl;
    // cout << (&p) << endl;
    // cout << (*p) << endl;
    // cout << (q) << endl;
    // cout << (&q) << endl;
    // cout << (*q) << endl;
    // // cout << (**q) << endl;

    // int arr[] = {10, 20, 30, 40, 50};
    // int size = 5;
    // fSize(arr, size);

    return 0;
}