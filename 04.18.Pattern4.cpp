//Pattern programs//
#include<iostream>
using namespace std;
int main()
{
    int a,b,n=5;
    for (a=1;a<=n;a++)
        {
            for (b=1;b<=a;b++)
                cout<<b;
            cout<<endl;
        }
    return 0;
}
/*1
12
123
1234
12345*/