#include<iostream>
using namespace std;
struct Student
{
    int rno;
    char name[50];
    int cls,marks;
};
int main()
{
    Student *a[20];
    cout<<sizeof(a)<<endl;
    int i,n;
    cout<<"Enter the number of students whose data is need to be taken: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        a[i]= new Student;
        cout<<"Enter rollno, name, class and final score of Student"<<i+1<<endl;
        cin>>a[i]->rno>>a[i]->name>>a[i]->cls>>a[i]->marks;
    }
    for(i=0;i<n;i++)
    {
        cout<<"Student "<<i+1<<" : "<<endl;
        cout<<a[i]->name<<" has scored "<<a[i]->marks<<endl;
    }
    return 0;
    }
