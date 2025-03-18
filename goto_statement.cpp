#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter your number\n";
    cin>>a;
    yash:
    if(a>=1)
    {
        cout<<--a<<"\t";
    }
    goto yash;
}