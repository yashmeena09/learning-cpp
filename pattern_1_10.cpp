#include<iostream>
using namespace std;
int main()
{
    int k=1;
 for( int r=1; r<=4;r++)
 {
    for(int s=3;s>=r;s--)
    {
      cout<<" ";
    }
    for(int c=1; c<=r;c++)
    {
        cout<<k;
        k++;
    
    }
    cout<<"\n";
 }
}