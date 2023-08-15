//Pattern programs//
#include<iostream>
using namespace std;
int main()
{
    int a,b,n=5,k;
    while (n>=1)
    {
        cout<<"@@@@@@@@@@@@";
        n--;
        cout<<endl;
    };
    while(n<=3)
    {
        cout<<"@@@@@";
        n++;
        cout<<endl;
    };
    while(n<=6)
    {
        n++;
        cout<<"@@@@@";
        for(k=0;k<=4;k++)
            cout<<" ";
        cout<<"@@@@@@@@";
        cout<<endl;
    };
    while (n>=4)
    {
        cout<<"@@@@@@@@@@@@";
        n--;
        cout<<endl;
    };

    return 0;
}