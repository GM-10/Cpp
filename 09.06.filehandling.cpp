#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fout;
    fout.open("table.txt",ios::app);
    int num,i;
    cout<<"Enter a number: "<<endl;
    cin>>num;

    fout<<"Table of"<<num<<" is "<<endl;
    for(i=1;i<=10;i++)
    {
        fout<<num<<" X "<<i<<" = "<<num*i<<endl;
    }
    fout.close();
    return 0;
}