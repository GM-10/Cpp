//pointers are a special variable used to store address of another variable datatype. here * is pointer notation. //
#include<iostream>
using namespace std;
void swap(int *p, int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    int a,b;
    cout<<"ENter any two numbers: ";
    cin>>a>>b;
    cout<<"Before swap a is "<<a<<"b is "<<b<<endl;
    swap(&a,&b);
    cout<<"After swap a is "<<a<<"b is "<<b<<endl;
    return 0;
}