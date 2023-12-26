#include<iostream>
using namespace std;
class Bank
{
    protected:
    int acno;
    char name[30];
    long int balance;
public:
    void input()
    {
        cout<<"Enter Account number: ";
        cin>>acno;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Initial balance: ";
        cin>>balance;
    }
    void show()
    {
        cout<<"Account number is: "<<acno<<endl;
        cout<<"Name is: "<<name<<endl;
        cout<<"Initial Balance is: "<<balance<<endl;
    }
};
class Savings : public Bank
{
public:
    void withdraw(int amt)
    {
        if(amt<balance)
        {    
            balance -=amt;
            cout<<"Amount withdrawn successfully."<<endl;
            cout<<"Remaining balance is: "<<balance<<endl;
        }else
            cout<<"Insufficient balance in the account."<<endl;
    }
    void deposit(int amt)
    {
        balance+=amt;
        cout<<"Amount Deposited"<<endl;
        cout<<"Updated Balance is "<<balance<<endl;
    }
};
class FD : public Bank
{
    float rate;
    int time;
public:
    void input()
    {
        Bank::input();
        cout<<"Enter rate of interest: ";
        cin>>rate;
        cout<<"Enter time period: ";
        cin>>time;
    }
    void show()
    {
        Bank::show();
        cout<<"Rate of interest is "<<rate<<endl;
        cout<<"Time period is "<<time<<endl;
    }
    void showamount()
    {
        float si,amt=0;
        si=balance*rate*time/100;
        amt=balance+si;
        cout<<"Final amount is "<<amt<<endl;
    }
};
int main()
{
    Savings s;
    s.input();
    s.show();
    s.withdraw(500);
    s.deposit(1000);
    FD f;
    f.input();
    f.show();
    f.showamount();
    return 0;
}