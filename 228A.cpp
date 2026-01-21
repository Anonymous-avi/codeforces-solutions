#include<bits/stdc++.h>
using namespace std;
int main(){
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    set<int>st={s1,s2,s3,s4};
    int n=st.size();
    if(n==1){
        cout<<"3";
    }
    else if(n==2){
        cout<<"2";
    }
    else if(n==3){
        cout<<"1";
    }
    else
    cout<<"0";

    return 0;
    
}