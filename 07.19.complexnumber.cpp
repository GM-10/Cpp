#include<iostream>
using namespace std;
struct comp
{
    int real,imaginary;
};
int main()
{
    int i;
    comp a[2];
    cout<<"Enter the real and imaginary part of the complex number."<<endl;
    for(i=0;i<2;i++)
    {
        cout<<"Enter the complex number: "<<i+1<<endl;
        cin>>a[i].real>>a[i].imaginary;
    }
    cout<<"Real part\t Imaginary Part"<<endl;
    for(i=0;i<2;i++)
    {
        cout<<a[i].real<<" + "<<a[i].imaginary<<"i "<<endl;
    }
    return 0;    
}
