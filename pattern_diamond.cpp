//5 row 5  column
// there is three loop  use 1=row 2=space 3= co 
#include<iostream>
using namespace std;
int main()
{
    for(int r=1;r<=5;r++)
    {
        for(int s=4;s>=r;s--)
        {
            cout<<" ";
        }

      for(int c=1; c<=r;c++)  
      {
         cout<<"*";
      } 
      cout<<"\n";
    }
}