#include<iostream>
using namespace std;
int main(){
    int n; cout<<"enter your base\n";
    cin>>n;
    int p, j=1;
    cout<<"enter your power\n";
    cin>>p;
    for( int i=1; i<=p; i++){
        j=j*n;
    }
    cout<<j;
}