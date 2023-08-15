#include<iostream>
using namespace std;
int main()
{
    int i,j,num[10],k;
    cout<<"Enter any ten numbers: "<<endl;
    for (i=0;i<10;i++)
    cin>>num[i];
    for (j=0;j<10;j++)
    {
        k=num[j]%10;
        if(k==7)
        cout<<num[j];

    }return 0;
}