#include<iostream>
using namespace std;
struct employee
{
    int empid;
    char name[30];
    int salary;
};
void input(employee &x)
{
    cout<<"Enter employee ID, name and salary"<<endl;
    cin>>x.empid>>x.name>>x.salary;
}
void display(employee x)
{
    cout<<"ID : "<<x.empid<<" Name: "<<x.name<<" Salary: "<<x.salary<<endl;
}
int main()
{
    employee a,b;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    input(a);
    input(b);
    display(a);
    display(b);
    return 0;
}