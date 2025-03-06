#include<iostream>
using namespace std;
int main()
{
              //reference variable 
              int a=10;// normal variable
              int &b=a;//reference variable
              cout<<"a="<<a<<"\n";
              cout<<"b="<<b<<"\n";
              cout<<"addresso f a="<<&a<<"\n";
              cout<<"address of b="<<&b<<"\n";
              b=90;
              cout<<"a="<<a<<"\n";
              cout<<"b="<<b<<"\n";
            
}