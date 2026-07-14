#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n,m;
        cin>>x>>n>>m;
        for(int i=n ; i>0 ; i--){
            if(x/2 + 10 <x){
                x=x/2 + 10;
            }
            
        }
        
        for(int i=m ; i>0 ; i--){
                x=x-10;
        }
        if(x<=0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}