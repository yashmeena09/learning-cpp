#include<iostream>
using namespace std;
int main ()
{
    int n,s ,a, k;
    k=n;
    cout<<"enter exact 3 digit number \n ";
    cin>>n;
    {
     do 
     {
        a=n%10;
        s=s+(a*a*a);
        n=n/10;
     }while(n>0);
    }
    if(k==s)
    {
        cout<<"its armstrom number";

    }

}