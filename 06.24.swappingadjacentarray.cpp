#include<iostream>
using namespace std;
int main()
{
    int num[6],a;
    cout<<"Enter 6 numbers"<<endl;
    for(a=0;a<6;a++)
    {
        cin>>num[a];
    }
    for(a=0;a<6;a+=2)
    {
        int temp=num[a];
        num[a]=num[a+1];
        num[a+1]=temp;
    }
    cout<<"After swapping: "<<endl;
    for(a=0;a<6;a++)
    {
        cout<<num[a]<<"\t";
    }

    return 0;
}