#include <bits/stdc++.h>
using namespace std;

class functorOne
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

class Student
{
public:
    int marks;
    string name;
    Student()
    {
    }
    Student(int m, string n)
    {
        this->marks = m;
        this->name = n;
    }
};

class StudentComparator
{
public:
    bool operator()(Student a, Student b)
    {
        return a.marks < b.marks;
    }
};

int main()
{

    // functorOne cmp;
    // if (cmp(10, 5) == true)
    // {
    //     puts("10 is greater than 5");
    // }
    // else
    // {
    //     puts("10 is less than 5");
    // }

    Student s1;
    Student s2;

    s1.marks = 93;
    s1.name = "Akshay";

    s2.marks = 89;
    s2.name = "Ravi";

    StudentComparator cmp;

    if (cmp(s1, s2))
    {
        puts("Ravi less");
    }
    else
    {
        puts("Akshay great");
    }

    return 0;
}