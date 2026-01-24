#include <bits/stdc++.h>
using namespace std;

bool prime(int x){
    for(int i=2;i*i<=x;i++) if(x%i==0) return false;
    return x>=2;
}

int main(){
    int n,m; cin>>n>>m;
    for(int i=n+1;;i++){
        if(prime(i)){
            cout<<(i==m?"YES":"NO");
            break;
        }
    }
}