//Swapping adjacent element//
#include<iostream>
using namespace std;
int main()
{
    int n,i,temp;
    cout<<"How many numbers are there?: ";
    cin>>n;
    int a[n];
    cout<<"Enter the array element"<<endl;
    for (i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter array is: "<<endl;
    for(i=0;i<n;i++)
        cout<<a[i]<<"\t";
    cout<<endl;

    for(i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    cout<<"Array after interchange is: "<<endl;
    for (i=0;i<n;i++)
        cout<<a[i]<<"\t";
    return 0;
}