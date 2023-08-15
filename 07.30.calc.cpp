#include<iostream>
using namespace std;
int main()
{
    int num1,num2,res,choice;
    cout<<"Enter two Numbers: ";
    cin>>num1>>num2;
    cout<<"Press 1-Addition, Press 2-Subtraction, Press 3-Multiplication, Press 4-Division"<<endl;
    cout<<"ENter your choice: "<<endl;
    cin>>choice;
    if (choice==1)
    {
        res=num1+num2;
        cout<<"The addition of "<<num1<<" and "<<num2<<" is "<<res<<endl;
    }
    else if (choice==2)
    {
        res=num1-num2;
        cout<<"The subtraction of "<<num1<<" and "<<num2<<" is "<<res<<endl;
    }
    else if (choice==3)
    {
        res=num1*num2;
        cout<<"The multiplication of "<<num1<<" and "<<num2<<" is "<<res<<endl;
    }
    else if (choice==4)
    {
        res=num1/num2;
        cout<<"The division of "<<num1<<" and "<<num2<<" is "<<res<<endl;
    }
    else
    cout<<"Please enter a valid number!";
    return 0;
}