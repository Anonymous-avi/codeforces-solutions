#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        int ans=0;
        for(int j=0 ; j<s.size() ; j++){
            if(s[j]=='('){
                count++;
            }
            else{
                count--;
            }

            if(count<0){
              ans++;
              count=0;
            }
            
        }
        cout<<ans<<endl;
    }
}