#include<iostream>
using namespace std;
struct date
{
    int day,month,year;
};
struct Address
{
    int blockno;
    char society[20],area[20],city[20],district[20],state[20];
    int pin;
};
struct Employee
{
    int empid;
    char name[50];
    int salary;
    Address add;
    date doj;
};
int main()
{
    int i;
   Employee a[2];
    for(i=0;i<2;i++)
    {
        cout<<"Enter Employee ID, name, salary:"<<i+1<<endl;
        cin>>a[i].empid>>a[i].name>>a[i].salary;
        cout<<"Enter the address of the employee(blockno, society, area, city, district, state, pin no.)"<<endl;
        cin>>a[i].add.blockno>>a[i].add.society>>a[i].add.area>>a[i].add.city>>a[i].add.district>>a[i].add.state>>a[i].add.pin;
        cout<<"Enter the Date of joining(ddmmyyyy)"<<endl;
        cin>>a[i].doj.day>>a[i].doj.month>>a[i].doj.year;
    }
    if(a[0].salary>a[1].salary)
    {
        cout<<"Details of employee 0 are: "<<endl;
        cout<<"empid\tname\tsalary\tDate of joining"<<endl;
        cout<<a[0].empid<<'\t'<<a[0].name<<'\t'<<a[0].salary<<'\t'<<a[0].doj.day<<"-"<<a[0].doj.month<<"-"<<a[0].doj.year<<endl;
        cout<<"Adress: "<<endl;
        cout<<a[0].add.blockno<<a[0].add.society<<a[0].add.area<<a[0].add.city<<a[0].add.district<<a[0].add.state<<a[0].add.pin<<endl;
    }
    else if(a[0].salary<a[1].salary)
    {
        cout<<"Details of employee 1 are: "<<endl;
        cout<<"empid\tname\tsalary\tDate of joining"<<endl;
        cout<<a[1].empid<<'\t'<<a[1].name<<'\t'<<a[1].salary<<'\t'<<a[1].doj.day<<"-"<<a[1].doj.month<<"-"<<a[1].doj.year<<endl;
        cout<<"Adress: "<<endl;
        cout<<a[1].add.blockno<<a[1].add.society<<a[1].add.area<<a[1].add.city<<a[i].add.district<<a[2].add.state<<a[1].add.pin<<endl;
    }
    else{
        cout<<"Both employees have same salary."<<endl;
    }
    return 0;
}
