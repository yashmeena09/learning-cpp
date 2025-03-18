#include<iostream>
using namespace std;
int main()
{
     int a;
     char c;
     cout<<"enter any charecter\n";
     cin>>c;
     cout<<"select 1 for vowels or consonant, 2 for gender\n";
     cin>>a;
     switch(a)
     {
        case 1:
        {
         if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
         {
        cout<<"the charecter is vowel";
        break;

                          
         }
         else  {
            cout<<"it's an consonant";
            break;  
         }

        }
      
         case 2:
         {
            if(c== 'm')
            {
               cout<<"male";
               break;
            }
            else if(c=='f')
            {
               cout<<"female";
               break;
            }

                  }
                  default:
                  {
                     cout<<"invalid";
                  }

        }
     }
