//Pattern programs//
#include<iostream>
using namespace std;
int main()
{
    int a,b,k;
    for (a=0;a<=5;a++)
        {
            for (b=0;b<=a;b++)
                cout<<" ";
            cout<<"*";
            for(k=0;k<=2*(5-a);k++)
                cout<<" ";
            cout<<"*";
            cout<<endl;
            
        }
    cout<<"       *";
    return 0;
}
