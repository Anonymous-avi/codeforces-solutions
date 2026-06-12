#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m , c;
    int countm=0;
    int countc=0;
    while(n--){
        
        cin>>m>>c;
        
        if(m>c){
            countm++;
        }
        else if(c>m){
            countc++;
        }

    }
    if(countm>countc){
        cout<<"Mishka";
    }
    else if(countc>countm){
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";
    }
    return 0;
}