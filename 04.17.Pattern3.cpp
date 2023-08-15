//Pattern programs//
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    for (a=5;a>=0;--a)
        {
            for (b=1;b<=a;b++)
                cout<<b;
            cout<<endl;
        }
    return 0;

}
/*12345
1234
123
12
1*/