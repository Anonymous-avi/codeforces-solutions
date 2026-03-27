#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t=n-10;
    if(t==1 || t==11){
        cout<<4;
    }
    else if(t==2||t==3||t==4||t==5||t==6||t==7||t==8||t==9){
        cout<<4;
    }
    else if(t==10){
        cout<<15;
    }
    else
    cout<<0;

    return 0;
}