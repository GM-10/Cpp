#include<iostream>
using namespace std;
class Department;//forward declaration

class Employee
{
    int empid;
    char name[40];
    char job[40];
    int deptid;
public:
    void input()
    {
        cout<<"Enter Employee ID, employee name, Job and department Id :"<<endl;
        cin>>empid>>name>>job>>deptid;
    }
    friend void check(Employee e, Department d);//friend function declaration
    
};
class Department
{
    int deptid;
    char dname[40];
public:
    void input()
    {
        cout<<"Enter department ID and department name: "; 
        cin>>deptid>>dname;  
    }
    friend void check(Employee e, Department d);
};
void check(Employee e, Department d)
    {
        if(e.deptid == d.deptid)
        cout<<e.name<<" works in "<<d.dname<<endl;
    }

int main()
{
    Employee e[5];
    Department d[2];
    for(int i=0; i<5; i++)
        e[i].input();
    d[0].input();
    d[1].input();
    for(int i=0; i<5;i++)
        for(int j=0;j<2;j++)
            check(e[i],d[j]);
    return 0;
}