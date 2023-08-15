#include<iostream>
using namespace std;
int main()
{
    int a,n,p;
    cout<<"ENter a number: ";
    cin>>n;
    for(a=1;a<=10;a++)
    {
        p=n*a;
        cout<<n<<"x"<<a<<"="<<p<<endl;
    }
    return 0;

}