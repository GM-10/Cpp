#include<iostream>
using namespace std;
class String
{
    char str[50];
    public:
        void input()
        {
            cout<<"Enter a string :";
            cin>>str;
        }
        void show()
        {
            cout<<"String is "<<str<<endl;
        }
        friend String operator + (String,String);
};
String operator + (String x,String y)
{
    String z;
    int i,j;
    for( i=0; x.str[i]!='\0';i++)
        z.str[i]=x.str[i];
    z.str[i++]=' ';
    for(j=0; y.str[j]!='\0';j++,i++)
        z.str[i]=y.str[j];
    z.str[i++]='\0';
    return z;
}
int main()
{
    String a,b,c;
    a.input();
    b.input();
    c=a+b;
    a.show();
    b.show();
    c.show();
    return 0;
}