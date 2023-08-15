#include<iostream>
using namespace std;
int main()
{
    int a[20],n,i,j,temp,num=0,num1=0;
    cout<<"How many numbers are there? : ";
    cin>>n;
    cout<<"Enter the numbers : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])//increasing//
            {
                num+=1;
            }
            else if(a[i]<a[j])//decreasing//
            {
                num1+=1;
            }
        }
    }
    if(num==0)
        cout<<"Sorted in Ascending order.";
    else if(num1==0)
        cout<<"Sorted in decreasing order.";
    else
    cout<<"Not sorted.";
    cout<<endl;
    return 0;
}