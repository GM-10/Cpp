#include<iostream>
using namespace std;
int main()
{
    int num[5],a;
    cout<<"Enter any five numbers: ";
    for(a=0;a<5;a++)
    {
        cin>>num[a];
    }
    cout<<"Numbers that end with 7 are: "<<endl;
    for(a=0;a<5;a++)
    {
        if(num[a]%10==7)
        cout<<num[a]<<endl;
    }
    return 0;
}