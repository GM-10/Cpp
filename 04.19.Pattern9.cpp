//Pattern programs//
#include<iostream>
using namespace std;
int main()
{
    int a,b,k;
    for (a=0;a<=5;a++)
        {
            for(k=1;k<=5-a;k++)
                cout<<" ";
            for (b=1;b<=2*a;b++)
                cout<<"*";
            cout<<endl;
        }
    return 0;
}
