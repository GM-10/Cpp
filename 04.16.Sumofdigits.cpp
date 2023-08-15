//To give the sum of digits//
#include<iostream>
using namespace std;
int main()
{
    int a,n,sum=0;
    cout<<"Enter the number: ";
    cin>>a;
    while (a!=0)
    {
        n=a%10;
        sum=sum+n;
        a=a/10;
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}