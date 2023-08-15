#include<iostream>
using namespace std;
int main()
{
    int a[20],n,i,j=0,even[20],odd[20],k=0;
    cout<<"How many numbers are there? : ";
    cin>>n;
    cout<<"Enter the numbers : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even[j]=a[i];
            j++;
        }
        else
        {
            odd[k]=a[i];
            k++;
        }
    }
    cout<<"Even numbers are: "<<endl;
    for(i=0;i<j;i++)
    {
        cout<<even[i]<<'\t';
    }
    cout<<endl;
    cout<<"Odd numbers are: "<<endl;
    for(i=0;i<k;i++)
    {
        cout<<odd[i]<<'\t';
    }
    return 0;
}