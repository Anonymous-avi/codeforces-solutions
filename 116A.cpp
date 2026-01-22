#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int current=0;
    int result=0;
    for(int i=0 ; i<n ; i++){
        int ai ,bi;
        cin>>ai>>bi;

        current=current+bi-ai;
        result=max({current,result});
    }
    cout<<result;
    return 0;


}