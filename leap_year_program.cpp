#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter  year\n";
    cin>>a;
    if (a%4==0 && a%100!=0 || a%400==0)
    {
        cout<<a<<" is leap year";
    }
    else
    {
        cout<<a<<"is not a leap year";
    }

}