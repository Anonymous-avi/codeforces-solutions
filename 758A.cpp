#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int maxi=INT_MIN;
    for(int i=0 ; i<n ; i++){
        maxi=max(maxi,a[i]);
    }
    int counter=0;
    for(int i=0 ; i<n ; i++){
        while(a[i]!=maxi){
            a[i]++;
            counter++;
        }
    }
    cout<<counter;
    return 0;
}