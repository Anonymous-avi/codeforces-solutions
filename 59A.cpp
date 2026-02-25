#include<bits/stdc++.h>
using namespace std;
int main(){
    string s =" ";
    cin>>s;
    int LowerCount=0;
    int UpperCount=0;
    for(int i=0 ; i<s.size() ; i++){
        if(islower(s[i])){
            LowerCount++;
        }
        else{
            UpperCount++;
        }
    }
    if(LowerCount>=UpperCount){
        for(int i=0 ; i<s.size() ; i++){
            s[i]=tolower(s[i]);
        }
    }
    else{
        for(int i=0 ; i<s.size() ; i++){
            s[i]=toupper(s[i]);
        }
    }
cout<<s;
return 0;
}