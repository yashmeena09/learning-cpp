#include <iostream>
using namespace std;
int main()
{
    int b,p,k=1;
    cout<<"enter base\n";
    cin>>b;//2
    cout<<"enter power\n";
    cin>>p;//3
    for(int i=1;i<=p;i++)
    {
       k=k*b;
    }
    cout<<"power ="<<k;
}
