/*To input name and marks of a student and print if he qualifies or not*/
#include<iostream>
using namespace std;
int main()
{
    int marks;
    char name[20];
    cout<<"\n\nStudents Results\n\n";
    cout<<"Enter marks: ";
    cin>>marks;
    cout<<"Enter Name: ";
    cin>>name;
    if(marks >= 50)
        cout<<name<<" is Qualified"<<endl;
    else
        cout<<name<<" is Not Qualified";
    cout<<"\n\n\nThanks for visiting\n\n\n"<<endl;
    return 0;
}