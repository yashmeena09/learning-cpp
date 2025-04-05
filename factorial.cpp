#include <iostream>

using namespace std;
int main()
{
    int a,k=1;
    cout<<"enter your number\n";///5
    cin>>a;
    for (a; a >1; a--)
    {
       
         k=k*a;
    
    }
    cout<<"factorial="<<k;
    
}