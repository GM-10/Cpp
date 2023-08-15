#include<iostream>
using namespace std;

void test()
{
    int a;
    a=a+1;
    cout<<a<<'\t'<<&a<<endl;
}
int main()
{
    test();
    test();
    test();
    return 0;
}