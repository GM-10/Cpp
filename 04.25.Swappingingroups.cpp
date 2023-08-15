//Swapping first half with the second half of element//
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

    for(i=0;i<n;i++)
    {
        if((i+1)<=(n/2))
        {
            temp=a[i];
            a[i]=a[i+(n/2)];
            a[i+(n/2)]=temp;
        }  
    }
    cout<<"Array after interchange is: "<<endl;
    for (i=0;i<n;i++)
        cout<<a[i]<<"\t";
    return 0;
}