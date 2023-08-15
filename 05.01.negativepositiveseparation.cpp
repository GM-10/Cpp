#include<iostream>
using namespace std;
int main()
{
    int a[20],n,i,j=-1,b[20],temp;
    cout<<"How many numbers are there? : ";
    cin>>n;
    cout<<"Enter the numbers : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Numbers entered are: "<<endl;
     for(i=0;i<n;i++)
    {
        cout<<a[i]<<'\t';
    }
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            for(j=i-1;j>=0;j--)
            {
                if(a[j]>0)
                {   temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
                }
                else
                    break;
            }
        }
    }



     cout<<"Numbers are: "<<endl;
     for(i=0;i<n;i++)
    {
        cout<<a[i]<<'\t';
    }
    cout<<"\n";
    return 0;
}