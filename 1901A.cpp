#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0 ; i<n ; i++){
            cin>>a[i];
        }
        int dist1=a[0]-0;
        int dist2=INT_MIN;
        for(int i=1 ; i<n ; i++){
          int diff=a[i]-a[i-1];
          dist2=max(dist2,diff);
        }
        int dist3=2*(x-a[n-1]);
        int res=max({dist1,dist2,dist3});
        cout<<res<<endl;

    }
    return 0;
}