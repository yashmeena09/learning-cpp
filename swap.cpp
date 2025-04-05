#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    // int temp =a;//4 
    //  a=b;//b=4
    //  b=temp;//b=5 = 5
   //  cout<<"a="<<a<<"b="<<b;

   a = a+b;//30
   b=a-b;//10
   a=a-b;//20
   cout<<"a="<<a<<"\t"<<"b="<<b;
}
