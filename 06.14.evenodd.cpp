#include<iostream>
using namespace std;
int main()
{
    int num1, res;
    cout<<"Enter the number to be checked: ";
    cin>>num1;
    res=num1 % 2;
    switch(res)
    {
        case 0:
            cout<<"Number is even."<<endl;
            break;
        default:
            cout<<"Number is odd. "<<endl;
    }
    return 0;
}