#include<iostream>
using namespace std;
class Employee
{
    protected:
    int empid;
    char name[30];
    int salary;
public:
    virtual void input()
    {
        cout<<"Enter Employee ID: ";
        cin>>empid;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter salary: ";
        cin>>salary;
    }
    virtual void show()
    {
        cout<<"Employee ID is: "<<empid<<endl;
        cout<<"Name is: "<<name<<endl;
        cout<<"salary is: "<<salary<<endl;
    }
    virtual void total()
    {}
};

class Salesman : public Employee
{
private:
    int monsales;
    float com=0;
public:
    void input()
    {
        Employee::input();
        cout<<"Enter monthly sales: ";
        cin>>monsales;
        com=0.1*monsales;
    }
    void show()
    {
        Employee::show();
        cout<<"Monthly sales: "<<monsales<<endl;
        cout<<"Commission: "<<com<<endl;
    }
    void total()
    {
        cout<<"Total salary is "<<com+salary<<endl;
    }
};

class worker : public Employee
{
    private:
    int overtime;
    float wages=0;
public:
    void input()
    {
        Employee::input();
        cout<<"Enter overtime: ";
        cin>>overtime;
        wages=overtime*500;
    }
    void show()
    {
        Employee::show();
        cout<<"Overtime: "<<overtime<<endl;
        cout<<"Wages: "<<wages<<endl;
    }
    void total()
    {
        cout<<"Total salary is "<<wages+salary<<endl;
    }
};

int main()
{
    int c,cc;
    Employee *p;
    do
    {
        cout<<"------------------------------------------------"<<endl;
        cout<<"1-New salesman"<<endl;
        cout<<"2-New worker"<<endl;
        cout<<"3-exit"<<endl;
        cout<<"------------------------------------------------"<<endl;
        cout<<"Your choice: ";
        cin>>c;
        if(c==1)
            p=new Salesman;//dynamic memory allocation.
        else if(c==2)
            p=new worker;
        else 
            break;
        do
        {
            cout<<"------------------------------------------------"<<endl;
            cout<<"1-To add"<<endl;
            cout<<"2-Show"<<endl;
            cout<<"3-Total salary"<<endl;
            cout<<"4-Main menu"<<endl;
            cout<<"------------------------------------------------"<<endl;
            cout<<"Your choice: ";
            cin>>cc;
            if(cc==1)
                p->input();
            else if(cc==2)
                p->show();
            else if(cc==3)
                p->total();
            else
                continue;
        } while (cc!=4);
    }while(c!=4);
    return 0;
}