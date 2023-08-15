#include<iostream>
using namespace std;
int main()
{
    int n[5],i;
    cout<<"Enter any 5 numbers: ";
    for (i=0; i<5;i++)
        cin>>n[i];
    cout<<"Entered values are: "<<endl;
    for (i=0;i<5;i++)
        cout<<n[i]<<endl;
    return 0;

}