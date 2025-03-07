#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 1\n";
    cin>>a;
    cout<<"enter2\n";
    cin>>b;
    cout<<"enter3\n";
    cin>>c;
   
    if(a>b && a>c)
    {
        cout<<a<<"islarge";
    }
    else if(b>a && b>c)
    {
        cout<<b<<"is large";
    }
    else if(a==b && a!=c && a>c)
    {
        cout<<a<<"is large";
    }
    else if (b==c && b!=a)
    {
        cout<<c<<"is large";
    }
    else if(a==b && b==c)
    {
        cout<<"all the numbers are equal";
    }     

    else 
    {
        cout<<c<<"is large";
    }


}