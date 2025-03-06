#include<iostream>
using namespace std;
int main()
{
 int a;
 cout<<"enter 1first number \n";
cin>>a;
int b;
cout<<"enter second number\n";
cin>>b;
int c;
c=(a>b)?a-b:b-a;
cout<<c;
return 0;
}