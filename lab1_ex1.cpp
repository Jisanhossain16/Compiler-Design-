//token identification part1

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string a;
    cout<<"Enter your input : ";
    cin>>a;
    bool x=false;
    for(int i=0;i<a.length();i++)
    {
        switch(a[i])
        {
            case '0':
            x=true;break;
            case '1':
            x=true;break;
            case '2':
            x=true;break;
            case '3':
            x=true;break;
            case '4':
            x=true;break;
            case '5':
            x=true;break;
            case '6':
            x=true;break;
            case '7':
            x=true;break;
            case '8':
            x=true;break;
            case '9':
            x=true;break;
            case '.':
            x=true;break;
            default:
            x=false;
            break;

        }


      }
      if(x==true)
      {
          cout<<"Numeric";
      }
      else
      {
          cout<<"Non numeric";
      }
}

