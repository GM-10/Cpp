#include<iostream>
using namespace std;
int main()
{
    int a[10][10];
    int i,j,r,c;
    cout<<"Enter the number of rows and columns:";
    cin>>r>>c;
    cout<<"Enter the matrix elements: ";//entering the matrix elements//
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Upper triangular matrix is: "<<endl;//Showing the entered matrix//
    for(i=0; i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(j>=i)
            {cout<<a[i][j]<<"\t";}
            else
            {cout<<"\t";}
        }cout<<"\n";
    }   
    cout<<"Lower triangular matrix is: "<<endl;//Showing the entered matrix//
    for(i=0; i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(j<=i)
            {cout<<a[i][j]<<"\t";}
        }cout<<"\n";
    }
    return 0;
}