#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    map<int,int>freq;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    vector<int>inc,dec;
    for(auto p : freq){
        int num=p.first;
        int count=p.second;

        if(count>2){
            cout<<"NO"<<endl;
            return 0;
        }
        inc.push_back(num);

        if(count==2){
            dec.push_back(num);
        }
    }

    sort(inc.begin() , inc.end());
    sort(dec.rbegin() , dec.rend());

    cout<<"YES"<<endl;
    cout<<inc.size()<<endl;
    for(int i=0 ; i<inc.size() ; i++){
        cout<<inc[i]<<" ";
    }
    cout<<endl;
    cout<<dec.size()<<endl;
    for(int i=0 ; i<dec.size() ; i++){
        cout<<dec[i]<<" ";
    }
    cout<<endl;

    return 0;

}