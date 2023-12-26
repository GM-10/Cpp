#include<iostream>
using namespace std;
class Teacher;
class Student
{
private:
    int admno;
    char name[40];  
    float marks;
public:
    friend istream& operator >>(istream &x, Student &y);
    friend ostream& operator <<(ostream &x, Student &y);
    friend Teacher;    
};
class Teacher
{
private:
   int tid;
   char name[40],subject[50];
public:
    friend Student;
    friend istream& operator >>(istream &x, Teacher &y);
    friend ostream& operator <<(ostream &x, Teacher &y);
    void show(Student x)
    {
        cout<<"Student name is "<<x.name<<endl;
    }//You can use the private data members of other class with the help of friend class.
};
istream& operator >>(istream &x, Teacher&y)
{
    cout<<"Enter Id :";
    cin>>y.tid;
    cout<<"Enter Name: ";
    cin>>y.name;
    cout<<"Enter Subject: ";
    cin>>y.subject;
    return x;
}
ostream& operator <<(ostream &x, Teacher &y)
{
    cout<<"ID is "<<y.tid<<endl;
    cout<<"Name is "<<y.name<<endl;
    cout<<"Subject is "<<y.subject<<endl;
    return x;
}
istream& operator >>(istream &x, Student&y)
{
    cout<<"Enter Admission No. :";
    cin>>y.admno;
    cout<<"Enter Name: ";
    cin>>y.name;
    cout<<"Enter Marks: ";
    cin>>y.marks;
    return x;
}
ostream& operator <<(ostream &x,Student &y)
{
    cout<<"Admission no. is "<<y.admno<<endl;
    cout<<"Name is "<<y.name<<endl;
    cout<<"Marks obtained is "<<y.marks<<endl;
    return x;
}
int main()
{
    Student a;
    cin>>a;
    Teacher b;
    cin>>b;
    b.show(a);
    return 0;
}