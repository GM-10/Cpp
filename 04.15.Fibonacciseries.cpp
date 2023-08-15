#include<iostream>
using namespace std;
int main()
{
    int a,n,b,c,d;
    cout<<"Enter a number: ";
    cin>>n;
    b=0;
    c=1;
    for(a=2;a<=n;a+=1)
    {   
        d=b+c;
        b=c;
        c=d;
        d+=d;
         
    }
    cout<<d<<endl<<endl;
    return 0;

}