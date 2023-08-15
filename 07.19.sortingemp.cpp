#include<iostream>
using namespace std;
struct employee
{
    int empid;
    char name[30];
    int salary;
};
void input(employee *x)
{
    cout<<"Enter employee ID, name and salary"<<endl;
    cin>>x->empid>>x->name>>x->salary;
}
void display(employee x)
{
    cout<<"ID : "<<x.empid<<" Name: "<<x.name<<" Salary: "<<x.salary<<endl;
}
int main()
{
    employee a[10],b;
    int n,i,j;
    cout<<"How many employees are there? "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
        input(&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i].salary<a[j].salary)
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    for(i=0;i<n;i++)
        display(a[i]);
    return 0;
}