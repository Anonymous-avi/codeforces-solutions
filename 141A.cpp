#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
   cin>>s1;
   string s2;
   cin>>s2;
   string s3;
   cin>>s3;

    string combined=s1+s2;
    sort(combined.begin() , combined.end());
    sort(s3.begin() , s3.end());
    if(combined==s3)
    cout<<"YES";
    else cout<<"NO";
}