#include <iostream>
using namespace std;
int main()
{  
    int num , reverse = 0 , k , rimender;
    
   cout<<"enter your number \n"; //121
   cin>>num;
   k= num;
   while ( num>0)
    {
        rimender=num%10; // 1
        num = num/10; // 12
         reverse =  reverse*10+rimender; //121
   } 
    if ( k==reverse)
    {
        cout<<"the number is palindrome";
    }
    else 
    {
        cout<<"its not";
    }
}