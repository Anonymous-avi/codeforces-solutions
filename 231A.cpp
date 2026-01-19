#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int result=0;
    for(int i=0 ; i<n ; i++){
        int a,b,c;
        cin>>a>>b>>b;
        if(a+b+c>=2){
            result++;
        }
    }
    cout<<result;
    return 0;
}