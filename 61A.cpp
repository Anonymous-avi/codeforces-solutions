#include<bits/stdc++.h>
using namespace std;
int main(){
   string s1;
   cin>>s1;
   string s2;
   cin>>s2;
   string result="";
   for(int i=0 ; i<s1.size() ; i++){
    if(s1[i]!=s2[i]){
        result.push_back('1');
    }
    else
    result.push_back('0');
   }

   cout<<result;

   return 0;
   
}