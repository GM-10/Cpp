//Finding out the maximum times 1 occur unbroken in the binary array//
#include<iostream>
using namespace std;
int main()
{
     int a[20],n,i,max=0,b=0;
    cout<<"How many numbers are there?: ";
    cin>>n;
    cout<<"Enter array elements only 0's and 1's: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    for (i=1;i<=n;i++)
    {
        if(a[i]==0)
        {
            b=0;            
        }
        else 
        {
            b++;
            if(b>max)
            max=b;
        }
    }
    cout<<"Maximum occurence: "<<max<<endl;
    return 0;
}