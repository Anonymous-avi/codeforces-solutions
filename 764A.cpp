#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,z;
    cin>>n>>m>>z;
    vector<int>vec;
    vector<int>arr;
    int i=1;
    while(n*i<=z){
        vec.push_back(n*i);
        i++;

    }
    int j=1;
    while(m*j<=z){
        arr.push_back(m*j);
        j++;
    }
    int count=0;
    for(int i=0 ; i<vec.size() ; i++){
        for(int j=0 ; j<arr.size() ; j++)
        {
            if(vec[i]==arr[j]){
                count++;
            }
        }
    }
    cout<<count;
}