#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter 2 different number\n";
    cin>>a>>b;
    cout<<"\nselect 1 for +, 2 for * , 3/ , 4 for -\n";
    cin>>c;
    switch(c)
    {
        
        case 1:
        {
            cout<<a+b;
            break;
        }
        
        case 2:
        {
            cout<<a*b;
            break;
        }
        
        case 3:
        {
            cout<<a/b;
            break;
        }
        
        case 4:
        {
            cout<<a%b;
            break;
        }
        default:
        {
            cout<<"invalid";
        }
    }
}