#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;

    for(int k=1;k<=n1*n2;k++)
    {
        if(k%n1==0 && k%n2==0)
        {
            cout<<"LCM is "<<k<<endl;
            break;
        }
    }
    while(n1%n2 !=0)
    {
        int rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    cout<<"Hcf is "<<n2<<endl;
    return 0;

}