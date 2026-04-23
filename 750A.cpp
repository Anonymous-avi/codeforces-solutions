#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int diff=240-k;
    int counter=0;
    for(int i=1 ; i<=n ; i++){
        if(5*i<=diff){
            counter++;
            diff=diff-5*i;
        }
        else{
            break;
        }
    }
    cout<<counter;
    return 0;
}