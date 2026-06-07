#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    int prod=1;
    for(int i=1 ; i<=10 ; i++){
       prod=k*i;
       if(prod%10==r || prod%10==0){
        cout<<i;
        break;
       }
       
    }
    return 0;
}