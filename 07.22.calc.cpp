#include<iostream>
using namespace std;
enum operation{add=1,subtract,multiply,divide};
int main()
{
    float a,b,res;
    int ch;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    cout<<"Press 1-Add, Press 2-Subtract, Press 3-Multiply, Press 4-Divide";
    cin>>ch;
    switch(ch)
    {
        case add:
        res=a+b;
        cout<<"Sum is "<<res<<endl;
        break;
        case subtract:
        res=a-b;
        cout<<"Difference is "<<res<<endl;
        break;
        case multiply:
        res=a*b;
        cout<<"Product is "<<res<<endl;
        break;
        case divide:
        res=a/b;
        cout<<"Division is "<<res<<endl;
        break;
    }
}