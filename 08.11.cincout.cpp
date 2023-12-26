#include<iostream>
using namespace std;
class Student
{
    int admno;
    char name[20];
    float marks;
public:
    friend istream& operator >>(istream &x, Student &y);
    friend ostream& operator <<(ostream &x, Student &y);
};
istream& operator >>(istream &x, Student &y)
{
    cout<<"Enter Admission no. :";
    cin>>y.admno;
    cout<<"Enter Name: ";
    cin>>y.name;
    cout<<"Enter marks: ";
    cin>>y.marks;
    return x;
}
ostream& operator <<(ostream &x, Student &y)
{
    cout<<"Admission no is "<<y.admno<<endl;
    cout<<"Name is "<<y.name<<endl;
    cout<<"Marks is "<<y.marks<<endl;
    return x;
}


int main()
{
    Student a,b;
    cin>>a;
    cin>>b;
    cout<<a;
    cout<<b;
    return 0;
}