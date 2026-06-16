#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        n=(n-1)/2;
        long long ans= (4LL*n*(n+1)*(2*n+1))/3;

        cout<<ans<<endl;
        }
        return 0;
}