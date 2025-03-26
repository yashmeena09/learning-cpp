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
        num = num/10; // 12 break the num( addition of num also)
         reverse =  reverse*10+rimender; //121 revers number (palindriome)
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