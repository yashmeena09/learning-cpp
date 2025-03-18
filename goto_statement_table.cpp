#include<iostream>
using namespace std;
int main()
{
 int a,b;
 cout<<"enter your number\n";
 cin>>a;
 b=0;
 yash:
 if (b<=10)
 {
    cout<<b++*a<<"\t";
 }
goto yash;

}