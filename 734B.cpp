#include<bits/stdc++.h>
using namespace std;
int main(){
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int fstmin=min(k2,min(k5,k6));
    int fans=256*fstmin;
    k2=k2-fstmin;
    int smin=min(k2,k3);
    int sans=32*smin;
    int sum=fans+sans;

    cout<<sum;
    return 0;

}