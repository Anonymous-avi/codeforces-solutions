#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if(x<2){
        return false;
    }
    for(int i=2 ; i*i<=x ; i++){
        if(x%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    for(int m=1 ; m<=1000 ; m++){
        int num=n*m+1;
        if(!isPrime(num)){
            cout<<m;
            break;
        }
    }
    return 0;
}