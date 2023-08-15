//Pattern programs//
#include<iostream>
using namespace std;
int main()
{
    int a,b,n=5;
    for (a=5;a>=1;a--)
        {
            for (b=a;b<=5;b++)
                if (b%2==0)
                    cout<<"0";
                else
                    cout<<"1";
            cout<<endl;
        }
    return 0;
}
/*1
01
101
0101
10101*/