//To find whether the given number is prime or not//
#include<iostream>
using namespace std;
int main()
{
    int n,f,i;
    char ch;
    do
    {
        cout<<"Enter a number: ";
        cin>>n;
        f=0;
        for(i=2;i<=n-1;i++)
        if (n%i==0)
        {
            f++;
            break;
        }
        if(f==0 && n!=1)
            cout<<n<<"is Prime"<<endl;
        else
            cout<<n<<"is not prime"<<endl;
        cout<<"Do you want to try for some more numbers?"<<endl;
        cin>>ch;
    } 
    while (ch=='Y'||ch=='y');
    return 0;

    
}