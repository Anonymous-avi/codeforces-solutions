#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c;
    cin>>n>>c;
    vector<int>vec(n);
    for(int i=0 ; i<n ; i++){
        cin>>vec[i];
    }
    int count=1;
    for(int i=0 ; i<n-1 ; i++){
        if(vec[i+1]-vec[i]<=c){
            count++;
        }
        else
        count=1;
    }
    cout<<count;
    return 0;
}