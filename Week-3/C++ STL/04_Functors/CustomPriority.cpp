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
        return a.marks < b.marks;
    }
};


int main()
{

priority_queue<Student,vector<Student>,comp>arr;
    arr.push(Student(90,"Akshay"));
    arr.push(Student(80,"Aayush"));
    arr.push(Student(80,"Deepak"));

    cout<<arr.top().marks<<" "<<arr.top().name<<endl;
    arr.pop();
    cout<<arr.top().marks<<" "<<arr.top().name<<endl;
    arr.pop();
    cout<<arr.top().marks<<" "<<arr.top().name<<endl;
    arr.pop();

    // priority_queue<int> p;
    // priority_queue<int, vector<int>, less<int>> pp;
    // priority_queue<int,vector<int>,greater<int>>qq;

    return 0;
}