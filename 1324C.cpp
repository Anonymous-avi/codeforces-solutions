#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int>ans;
        ans.push_back(0);
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]=='R'){
                ans.push_back(i+1);
            }
        }
        ans.push_back(s.size()+1);
        int diff=0;
        int maxi=0;
        for(int i=1 ; i<ans.size() ; i++){
            diff=ans[i]-ans[i-1];

            maxi=max(maxi,diff);
        }
        cout<<maxi<<endl;
    }
    return 0;

}