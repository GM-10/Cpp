//Finding the HCF of two numbers using functions.//
#include<iostream>
using namespace std;
void operation(int x,int y)
{
     while (x%y != 0)
    {
        int r=x%y;
        x=y;
        y=r;
    }
    cout<<"Hcf is"<<y<<endl; 
}
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    operation(a,b);
    return 0;
}