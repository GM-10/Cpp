//Pattern programs//
#include<iostream>
using namespace std;
int main()
{
    int a,b,n=5;
    for (a=1;a<=n;a++)
        {
            for (b=5;b>=a;b--)
                cout<<b;
            cout<<endl;
        }
    return 0;
}
/*54321
5432
543
54
5*/