#include<iostream>
using namespace std;
int sorting(int a[],int n)
{
    int i,j,temp;
    for (i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"Array after sorting is: "<<endl;
    for(i=0;i<n;i++)
        cout<<a[i]<<'\t'<<endl;
}
int main()
{
    int a[20],n,i,j,temp;
    cout<<"How many numbers are there? : ";
    cin>>n;
    cout<<"Enter the numbers : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sorting(a,n);
    return 0;
}