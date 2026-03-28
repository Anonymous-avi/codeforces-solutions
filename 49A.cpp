#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0 ; i<s.size() ; i++){
        s[i]=tolower(s[i]);
    }
    for(int i=s.size()-1 ; i>=0 ; i--){
        if(isalpha(s[i])){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
                cout<<"YES";
            }
            else
            cout<<"NO";
            break;
        }
        
    }
    return 0;
}