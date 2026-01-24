#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n;
    cin>>n;
    if(n%2!=0){
        cout<<-1;
        return 0;
    }
    vector<int>nums(n);
    for(int i=0 ; i<n ; i++){
        nums[i]=i+1;
    }
    for(int i=0 ; i<n ; i=i+2){
        swap(nums[i] , nums[i+1]);
    }
    for(int i=0 ; i<n ; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}