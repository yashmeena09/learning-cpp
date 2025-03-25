#include<iostream>
using namespace std;
int main ()
{
    int n,count;
    cout<<"enter any number "; 
    cin>>n;

for( int a=1; a<=n;a++)
{
 if (n%a==0)
 {
    count++;
    
 }
 if(count==2)
 {
    cout<<"prime";
 }
 else{
    cout<<"non prime";
 }
}

}