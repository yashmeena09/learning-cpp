#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter any number";
    cin>>a;
    b=1;
    if(a<0)
    {
       cout<<"invalid";
    }
    else{
do
{
        cout<<b*a<<"\n";
    ++b;
    

} while (b<=10);
}

}