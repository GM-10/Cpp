#include<iostream>
using namespace std;
int main()
{
    int a[20],n,i,max,min;
    cout<<"How many numbers are there?: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
        else if (a[i]<min)
            min=a[i];
    }
    cout<<"Highest Number "<<max<<endl;
    cout<<"Lowest number "<<min<<endl;
    int smax=0;
    for(i=1;i<n;i++)
    {
        if(a[i]!=max && a[i]>smax)
            smax=a[i];
    }
    cout<<"Second highest number is : "<<smax<<endl;
    return 0;
}