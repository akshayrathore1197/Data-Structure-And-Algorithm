#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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

class comp{
    public:
    bool operator()(Student a,Student b){
        if(a.marks==b.marks){
            return a.name < b.name;
        }
        return a.marks > b.marks;
    }
};

int main()
{


    vector<Student>arr;
    arr.push_back(Student(90,"Akshay"));
    arr.push_back(Student(80,"Aayush"));
    arr.push_back(Student(80,"Deepak"));


sort(arr.begin(),arr.end(),comp());

for (auto &&i : arr)
{
    cout<<i.marks<<" "<<i.name<<endl;
}

    return 0;
}