#include<iostream>
using namespace std;
class Account
{
    int acno;
    char name[40];
    float balance;
public:
    void input()
    {
        cout<<"Enter the account number: ";
        cin>>acno;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter inital balance ";
        cin>>balance;
    }
    void show()
    {
        cout<<"Account no. "<<acno<<endl;
        cout<<"Balance is "<<balance<<endl;
    }
    void withdraw(int amt)
    {
        if (amt<=balance)
        {
            balance-=amt;
            cout<<"\nwithdrawal successful\n";
        }
        else
        cout<<"\nINsufficient balance in the account\n";
    }
    void deposit(int amt)
    {
        balance+=amt;
        cout<<"Deposition successful";
    }
};
int main()
{
    Account a;
    int n,amount;
    a.input();
    a.show();
    cout<<"Press 1-withdraw, 2- deposit: ";
    cin>>n;
    if (n==1)
    {
        cout<<"Enter amount to be withdrawn: ";
        cin>>amount;
        a.withdraw(amount);
        a.show();
    }
    else if (n==2)
    {   cout<<"Enter amount to be deposited: ";
        cin>>amount;
        a.deposit(amount);
        a.show();
    }
    else
    {
        cout<<"Invalid number entered"<<endl;
    }
    return 0;
}