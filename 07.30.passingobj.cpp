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
    };
};
class Saving : public Account
{
    float balance;
    public:
        void input()
        {
            cout<<"Enter balance : ";
            cin>>balance;
        }
        void show()
        {
            cout<<"Balance is "<<balance<<endl;
        }
};
int main()
{
    Saving a;
    a.input();
    a.show();
    return 0;
}
