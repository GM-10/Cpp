#include<iostream>
using namespace std;
class Student
{
private:
    int admno;
    char name[20];
    float marks;
    static float passing_marks;
public:
    void input()
    {
        cout<<"Enter admission number: ";
        cin>>admno;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void show()
    {
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"Admission number: "<<admno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
        if(marks>=passing_marks)
            cout<<"PASS!"<<endl;
        else
            cout<<"FAIL!"<<endl;
    }
    static void readPassingMarks()//can be called without any object.
    {
        cout<<"Enter the minimum marks required to pass the examination.";
        cin>>passing_marks;
    }
};
float Student::passing_marks;

int main()
{
    Student a,b,c;
    a.input();
    b.input();
    c.input();
    Student::readPassingMarks();
    a.show();
    b.show();
    c.show();
    cout<<"----------------------------------------------------------"<<endl;
    return 0;
}