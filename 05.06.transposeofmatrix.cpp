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
    cout<<"Enter matrix is: "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<"\t";
        }cout<<endl;
    }
    cout<<"Transpose of matrix is: "<<endl;
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            cout<<a[j][i]<<"\t";
        }cout<<endl;
    }
    return 0;
}