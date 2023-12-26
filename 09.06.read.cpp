#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    char txt[80];
    ifstream f1("Table.txt");
    while(f1.getline(txt,80))
    {
        cout<<txt<<endl;
    }
    return 0;
}