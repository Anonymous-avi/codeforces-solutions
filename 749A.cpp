#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        int ans=n/2;
        cout<<ans<<endl;
        while(ans--){
            cout<<2<<" ";
        }
    }
    else{
        int diff=n-3;
        int num=diff/2;
        cout<<num+1<<endl;
        while(num--){
            cout<<2<<" ";
        }
        cout<<3;
    }
    return 0;
}