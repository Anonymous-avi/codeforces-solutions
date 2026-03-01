#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t;
    cin>>t;
    string s;
    cin>>s;
    for(int i=1 ; i<=t ; i++){
        for(int j=0 ; j<n-1 ; j++){
            if(s[j]=='B' && s[j+1]=='G'){
                char temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                j++;
            }
            else
            j=j*1;
        }
    }
    cout<<s;
    return 0;
}