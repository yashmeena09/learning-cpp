#include<iostream>
using namespace std;
int main()
{
    int a,b;
    b =1;
    cout<<"Enter your password\n";
    
    if (a>=1000 && a<=9999)
    while(b<=3)
    {
        cin>>a;
        if(a==2025)
        {
           cout<<" welcome";
           break;
        }
        else
        {
            cout<<" try again\n";
            
        }
    b++;
    }

    if(b>3)
    {
        cout<<"try another day";
    }
}