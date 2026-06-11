#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>>matrix(n,vector<char>(m));
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin>>matrix[i][j];
        }
    }
    int count=0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            if(matrix[i][j]=='C' || matrix[i][j]=='M'|| matrix[i][j]=='Y'){
                count++;
                break;
            }
        }
    }
    if(count>0){
        cout<<"#Color";
    }
    else
    cout<<"#Black&White";

    return 0;

}