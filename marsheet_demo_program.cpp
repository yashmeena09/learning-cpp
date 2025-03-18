#include<iostream>
using namespace std;
int  main()
{
    float p,c,m;
    cout<<"enter your p c m marks";
    cin>>p>>c>>m;
    if(p>=0 && p<=100) && (c>=0 && c<=100) && (m>=0 && m<=100)
    {
        cout<<"invalid";
    }
else if (p<35 && c<35 && m>35) || (c<35 && m<35 && p>35) || (m<35 && p<35 && c>353) || (m<35 && c<35 && p<35)
{
    cout<<"fail";
}
if(p<35 && C>35 && m>35)
{
    cout<<"supply in physics";
}
      
else if (c<35 && p>35 && m>35)
{
    cout<<"supply in chemistry";
}
 else if (m<35 && p>35 && c>35)
 {
    cout<<"supply in maths";
 }
  float per;
  per=(p+C+m)/3

  else if ( per>=60 && per<=100)
  {
    cout<<"1st division"<<per:

  }

  else if (per>=50 && per<60)
{
    cout<<" 2nd division"<<per;

}
else  
{
    cout<<"3rd divisiom"<<per;
}

 
}     