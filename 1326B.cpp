#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long>b(n);
    for(int i=0 ; i<n ; i++){
        cin>>b[i];
    }
    vector<long long>a(n);
    vector<long long>x(n);
    x[0]=0;
    a[0]=b[0]+x[0];
    long long mx=a[0];
    for(int i=1 ; i<n ; i++){
       x[i]=max(0ll,mx);
       a[i]=b[i]+x[i];
       mx=max(mx,a[i]);
    }
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
    return 0;

}