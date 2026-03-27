#include<bits/stdc++.h>
using namespace std;
int main(){
    int a , b,n;
    cin>>a>>b>>n;
   while(true){
    int g=gcd(a,n);
    if(n<g){
        cout<<"1";
        break;
    }
    n=n-g;

    g=gcd(b,n);
    if(n<g){
        cout<<"0";
        break;
    }
    n=n-g;
   }
   return 0;

}