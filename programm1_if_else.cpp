#include<iostream>
using namespace std;
int main()
{
    int pwd;
    cout<<"enter your password\n";
    cin>>pwd;
    if(pwd>=1000 && pwd<=9999)
    {
      if(pwd==2025)
      {
        int otp;
        cout<<"enter your otp\n";
        cin>>otp;
        if(otp==1000)
        {
            cout<<"you are owner";
        }
        else
        {
            cout<<" u r fraud";
        }
      }

      else
      {
        cout<<"no money";
      }
    }
    else
    {
      cout<<"invalid password";
    }
}