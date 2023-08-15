#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the number of elements in array: "<<endl;
    cin>>n;
    int  ar1[n],ar2[n],diff[n];
    cout<<"Enter the elements in first array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>ar1[i];
    }
    cout<<"Enter the elements in second array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>ar2[i];
    }
    cout<<"Absolute Difference is: "<<endl;
    for(i=0;i<n;i++)
    {
        if(ar1[i]>=ar2[i])
        {
            diff[i]=ar1[i]-ar2[i];
        }
        else
        {
            diff[i]=ar2[i]-ar1[i];
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<diff[i]<<"\t";
    }
    return 0;
}