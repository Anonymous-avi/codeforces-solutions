#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while((i*(i+1))/2 <= n){
        if(n==((i*(i+1))/2)){
            cout<<"YES";
            return 0;
        }

        i=i+1;

    }
    cout<<"NO";
    return 0;
}