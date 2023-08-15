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
        a[k++]=num%16;
        num=num/16;
    }
    cout<<"Hexadecimal equivalent is: ";
    for(i=k-1;i>=0;i--)
        if(a[i]==10)
            cout<<'A';
        else if(a[i]==11)
            cout<<'B';
        else if(a[i]==12)
            cout<<'C';
        else if(a[i]==13)
            cout<<'D';
        else if(a[i]==14)
            cout<<'E';
        else if(a[i]==15)
            cout<<'F';
        else        
        cout<<a[i];
    cout<<endl<<endl;
    return 0;
    
}