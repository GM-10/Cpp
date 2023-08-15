#include<iostream>
using namespace std;
int main()
{
    float num1, num2, result;
    int choice;
    cout<<"Enter any two numbers: ";
    cin>>num1>>num2;
    cout<<"Press-1 Add"<<endl;
    cout<<"Press-2 Substract"<<endl;
    cout<<"Press-3 Multiply"<<endl;
    cout<<"Press-4 Divide"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            result=num1+num2;
            cout<<"Sum of "<<num1<<" and "<<num2<<" is "<<result;
            break;
        case 2:
            result=num1-num2;
            cout<<"Difference of "<<num1<<" and "<<num2<<" is "<<result;
            break;
        case 3:
            result=num1*num2;
            cout<<"Multiplication of "<<num1<<" and "<<num2<<" is "<<result;
            break;
        case 4:
            result=num1/num2;
            cout<<"Division of "<<num1<<" and "<<num2<<" is "<<result;
            break;
        default:
            cout<<"Invalid option selected";
            break;
        
    }
    return 0;
}