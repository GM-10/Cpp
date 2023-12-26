#include<iostream>
using namespace std;
class String
{
    char str[50];
    public:
        friend istream& operator >>(istream &x, String &y);
        friend ostream& operator <<(ostream &x, String &y);
        friend char operator [](int);
        friend String operator + (String,String);
};
istream& operator >>(istream &x, String&y)
{
    cout<<"Enter string:";
    cin>>y.str;
    return x;
}
ostream& operator <<(ostream &x, String &y)
{
    cout<<"String is "<<y.str<<endl;
    return x;
}
char operator [](int i);
{
    if(i>=0 && i<str.len())
        return str[p];
    else
        return '\0';
}
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
    cin>>a;
    cin>>b;
    c=a+b;
    cout<<a;
    cout<<b;
    cout<<c;
    return 0;
}