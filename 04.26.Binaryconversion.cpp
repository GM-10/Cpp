#include<iostream>
using namespace std;

int main()
{
    int a[20],i,num,k;
    cout<<"Enter a number: ";
    cin>>num;
    k=0;
    while(num>0)
    {
        a[k++]=num%2;
        num=num/2;
    }
    cout<<"Binary equivalent is: "<<endl;
    for(i=k-1;i>=0;i--)
        cout<<a[i];
    cout<<endl<<endl;
    return 0;
    
}