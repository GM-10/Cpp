#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10];
    int i,j,r1,c1,r2,c2;
    cout<<"Enter the number of rows and columns in 1 :";
    cin>>r1>>c1;
    cout<<"Enter the number of rows and columns in 2:";
    cin>>r2>>c2;
    if(r1==r2&& c1==c2)
    {
    cout<<"Enter the matrix elements for 1st matrix: ";//entering the matrix elements//
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }
     cout<<"Enter the matrix elements for 2nd matrix: ";//entering the matrix elements//
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"First matrix is: "<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<a[i][j]<<"\t";
        }cout<<endl;
    }
      cout<<"Second matrix is: "<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<b[i][j]<<"\t";
        }cout<<endl;
    }
    cout<<"Addition of matrix is: "<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<a[i][j]+b[i][j]<<"\t";
        }cout<<endl;
    }
    }
    else
    {cout<<"Not possible"<<endl;}
    return 0;
}