#include<iostream>
using namespace std;
int main()
{
    int a[10][10];
    int i,j,r,c,n=0;
    cout<<"Enter the number of rows and columns:";
    cin>>r>>c;
    if (r==c)
    {cout<<"Enter the matrix elements: ";//entering the matrix elements//
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"Entered matrix is: "<<endl;//Showing the entered matrix//
        for(i=0; i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cout<<a[i][j]<<"\t";
                if(i==j && a[i][j]==1)
                    n++;
                else if(i!=j && a[i][j]!=0)
                    {n=0;
                    break;}
            }cout<<"\n";
        }
        if( r==n )
            cout<<"\n It is an identity Matrix"<<endl;
        else
            cout<<"\n Not an identity matrix."<<endl;
    }
    else
    cout<<"There are unequal no. of rows and columns."<<endl;
    return 0;
}