#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>s(n);
        for(int i=0 ; i<n ; i++){
            cin>>s[i];
        }
        sort(s.rbegin() , s.rend());
        int mini=INT_MAX;
        for(int i=0 ; i<n-1 ; i++){
            int diff=abs(s[i]-s[i+1]);
            mini=min(mini,diff);
        }
        cout<<mini<<endl;
    }
    return 0;
}