#include<iostream>
using namespace std;
//Multiple inheritance.
class Student
{
protected:
    int admno;
    char name[50];
    int marks;
public:
    void input()
    {
        cout<<"Enter Admission number: ";
        cin>>admno;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void show()
    {
        cout<<"Admission number is: "<<admno<<endl;
        cout<<"Name is: "<<name<<endl;
        cout<<"Marks is: "<<marks<<endl;
    }
};
class Teacher
{
protected:
    int tid;
    char name[50];
    char subject[40];
public:
    void input()
    {
        cout<<"Enter Teacher ID: ";
        cin>>tid;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter subject: ";
        cin>>subject;
    }
    void show()
    {
        cout<<"Teacher ID is: "<<tid<<endl;
        cout<<"Name is: "<<name<<endl;
        cout<<"Subject is: "<<subject<<endl;
    }
};
class School:public Student,public Teacher
{
    char name[90];
public:
    void input()
    {
        cout<<"Enter the name of the school: ";
        cin>>name;
        Student::input();
        Teacher::input();
    }
    void show()
    {
        cout<<"School name is "<<name<<endl;
        Student::show();
        Teacher::show();
    }
};
int main()
{
    School s;
    s.input();
    s.show();
    return 0;
}