#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string a;
    cout<<"Enter your input : ";
    cin>>a;
    for(int i=0;i<a.length();i++)
    {
        switch(a[i])
        {
            case '+':
            cout<<"+";break;
            case '-':
            cout<<"-";break;
            case '*':
            cout<<"*";break;
            case '/':
            cout<<"/";break;
            case '%':
            cout<<"%";break;
        }


     }
}
