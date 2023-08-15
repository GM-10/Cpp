#include<iostream>
using namespace std;
void increase(int n[])
{
    int i;
    for(i=0;i<5;i++)
        cout<<n<<"\t";
    cout<<endl;
    for(i=0;i<5;i++)
        n[i] += 2;
    for(i=0;i<5;i++)
        cout<<n[i]<<"\t";
    cout<<endl; 
}
int main()
{int i;
    int a[]= {20,10,26,30,50};
    for(i=0;i<5;i++)
        cout<<a[i]<<"\t";
    cout<<endl;
    increase(a);
    for(i=0;i<5;i++)
        cout<<a[i]<<"\t";
    cout<<endl;
    return 0;
}