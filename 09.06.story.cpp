#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{   //Read 5 statement and write it in a file named story1.txt
    char stat[100];
    fstream fout;
    fout.open("story1.txt",ios::app);
    cout<<"Enter 5 sentences: ";
    for(int i=0; i<5;i++)
    {
        cin.getline(stat,100);
        fout<<stat;
        fout<<endl;
    }
    fout.close();
    
    //open file and count no of vowels and digits.
    int vowel=0, digit=0;
    char txt[100];
    ifstream f1("story1.txt");
    while(f1.getline(txt,100))
    {
        for(int i=0;i<= strlen(txt);i++)
        if(txt[i]=='a' || txt[i]=='e' || txt[i]=='i' || txt[i]=='o' || txt[i]=='u' || txt[i]=='A' || txt[i]=='E' ||txt[i]=='I'|| txt[i]=='O'|| txt[i]=='U')
            vowel++;
        else if(txt[i]>=48 && txt[i]<58)
            digit++;
    }
    cout<<"Vowels are: "<<vowel<<endl;
    cout<<"Digits are: "<<digit<<endl;
    f1.close();

    //convert all the alphbets to capital letters
    char str[100];
    ifstream fcap("story1.txt");
    
    while(fcap.getline(str,100))
    {
        for(int i=0;i<=strlen(str);i++)
        if(str[i]>=97 && str[i]<123)
            str[i]-=32;
        cout<<str<<endl;
    }
    fcap.close();
    return 0;
}