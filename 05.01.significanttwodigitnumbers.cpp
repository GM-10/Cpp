#include<iostream>
using namespace std;
int main()
{
    int a[20],n,i,b[20],len,c;
    
    int temp;
    cout<<"How many numbers are there? : ";
    cin>>n;
    cout<<"Enter the numbers : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];
        c=to_string(temp).length();
        
        if(c>=2)
            {cout<<"Siginificant numbers are:"<<endl;
            b[i]=temp;
        cout<<b[i]<<endl;}
    }
    
}