#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<2;
    }
    else{
        long long  sum=0;
        long long  ans=2;
        for(int i=2 ; i<=n ; i++){
        sum=pow(2,i);
        ans=ans+sum;
        }

        cout<<ans;
    }
    return 0;
    
}
