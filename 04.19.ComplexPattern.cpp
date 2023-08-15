//Pattern programs//
#include<iostream>
using namespace std;
int main()
{
    int a,b,n=5,k;
    for (a=1;a<=n;a++)
        {
            for (b=1;b<=a;b++)
                cout<<".";
            for(k=0;k<=(5-a);k++)
                cout<<" ";
            cout<<".";
            for(k=0;k<=(5-a);k++)
                cout<<" ";
            for (b=1;b<=a;b++)
                cout<<".";
            cout<<endl;            
        }
    for (a=n;a>=1;a--)
    {
        for (b=a;b>=1;b--)
                cout<<".";
        for(k=(5-a);k>=0;k--)
            cout<<" ";
        cout<<".";
        for(k=(5-a);k>=0;k--)
            cout<<" ";
        for (b=a;b>=1;b--)
            cout<<".";
        cout<<endl;
    }
    return 0;
}