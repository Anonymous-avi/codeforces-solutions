#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k;
    cin>>n>>k;
    vector<int>ans(n);
    int count=0;
    for(int i=0 ; i<n ; i++){
        cin>>ans[i];
    }
    int kth=ans[k-1];
    for(int i=0 ; i<n ; i++){
       if(ans[i]>=kth && ans[i]>0){
        count++;
       }
    }
    cout<<count;
}