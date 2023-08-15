//Pattern programs//
#include<iostream>
using namespace std;
int main()
{
    int a,b,n=5;
    for (a=5;a>=0;a--)
        {
            for (b=5;b>=a;b--)
                cout<<b;
            cout<<endl;
        }
    return 0;
}
/*5
54
543
5432
54321
543210*/
