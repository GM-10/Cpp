#include<iostream>
using namespace std;
void cyclicorder(int a, int b,int c)
{
    int temp=a;
    a=b;
    b=c;
    c=temp;
    cout<<"Numbers after swapping are: "<<a<<'\t'<<b<<'\t'<<c<<endl;
}
int main()
{   
    int a,b,c;
    cout<<"Enter three number: "<<endl;
    cin>>a>>b>>c;
    cyclicorder(a,b,c);
    return 0;
}