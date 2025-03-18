#include<iostream>
using namespace std;
int main()
{
int rs1=0, rs2=0 , rs5=0, rs10=0, rs20=0,  rs50=0, rs100=0,rs500=0;
int amount;
cout<<"enter amount\n";
cin>>amount;
if(amount<=500)
{
    rs500=amount/500;
    amount=amount%500;
}if(amount<=200)
{
    rs500=amount/200;
    amount=amount%200;
} 
if(amount<=100)
{
    rs500=amount/100;
    amount=amount%100;
}
if(amount<=50)
{
    rs500=amount/50;
    amount=amount%50;
}
if(amount<=20)
{
    rs500=amount/20;
    amount=amount%20;
}
if(amount<=10)
{
    rs500=amount/10;
    amount=amount%10;
}
if(amount<=5)
{
    rs500=amount/5;
    amount=amount%5;
}
if(amount<=2)
{
    rs500=amount/2;
    amount=amount%2;
}
if(amount<=1)
{
    rs500=amount/1;
    amount=amount%1;
}
 
cout<<

return 0;
}