#include<iostream>
using namespace std;
int main()
{   int num, hun, tens, ones;
    cout<<"Enter the three-digit number: ";
    cin>>num;
    hun=(num-(num%100))/100;
    ones= (num-(hun*100))%10;
    tens=(num-((hun*100)+(ones)))/10;
    switch(hun)
    {   case 1:
            cout<<"One Hundred ";
            break;
        case 2:
            cout<<"Two Hundred ";
            break;
        case 3:
            cout<<"Three Hundred ";
            break;
        case 4:
            cout<<"Four Hundred ";
            break;
        case 5:
            cout<<"Five Hundred ";
            break;
        case 6:
            cout<<"Six Hundred ";
            break;
        case 7:
            cout<<"Seven Hundred ";
            break;
        case 8:
            cout<<"Eight Hundred ";
            break;
        case 9:
            cout<<"Nine Hundred ";
            break;
        default:
            cout<<"Enter only three digit number.";
            break;}
    switch(tens)
    {   case 1:
            switch(ones)
            {   case 1:
                    cout<<"Eleven";
                    break;
                case 2:
                    cout<<"Twelve";
                    break;
                case 3:
                    cout<<"Thirteen";
                    break;
                case 4:
                    cout<<"Fourteen";
                    break;
                case 5:
                    cout<<"Fifteen";
                    break;
                case 6:
                    cout<<"Sixteen";
                    break;
                case 7:
                    cout<<"Seventeen";
                    break;
                case 8:
                    cout<<"Eighteen";
                    break;
                case 9:
                    cout<<"Nineteen";
                    break;
                default:
                    cout<<"Ten";
                    break;}
        case 2:
            cout<<" Twenty ";
            break;
        case 3:
            cout<<" Thirty ";
            break;
        case 4:
            cout<<" Fourty ";
            break;
        case 5:
            cout<<" Fifty ";
            break;
        case 6:
            cout<<" Sixty ";
            break;
        case 7:
            cout<<" Seventy ";
            break;
        case 8:
            cout<<" Eighty ";
            break;
        case 9:
            cout<<" Ninety ";
            break;}
    if (tens!=1)
    switch(ones)
            {   case 1:
                    cout<<"One";
                    break;
                case 2:
                    cout<<"Two";
                    break;
                case 3:
                    cout<<"Three";
                    break;
                case 4:
                    cout<<"Four";
                    break;
                case 5:
                    cout<<"Five";
                    break;
                case 6:
                    cout<<"Six";
                    break;
                case 7:
                    cout<<"Seven";
                    break;
                case 8:
                    cout<<"Eight";
                    break;
                case 9:
                    cout<<"Nine";
                    break;
                default:
                    break;}
return 0;}