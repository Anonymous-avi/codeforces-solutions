#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s ;
    cin>>s;
    int countA =0;
    int countD=0;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='A'){
           countA++;
        }
        else
        countD++;
    }
      
    if(countA>countD){
        cout<<"Anton";
    }
    else if(countD>countA){
        cout<<"Danik";
    }
    else
    cout<<"Friendship";

    return 0;

}