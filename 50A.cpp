#include<bits/stdc++.h>
using namespace std;
int main(){
    int M , N;
    cin>>M>>N;
    if(M==1 && N==1){
        cout<<0;
    }
    else{
        cout<<(M*N)/2;
    }
    return 0;
}