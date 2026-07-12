#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int>nums(s.size());
        for(int i=0 ; i<s.size() ; i++){
            nums[i]=s[i]-'0';
        }
        vector<int>results;
        for(int i=0 ; i<nums.size() ; i++){
           if(nums[i]==1){
            int count=0;
            while(i<nums.size() && nums[i]==1){
                count++;
                i++;
            }
            results.push_back(count);
           }
           else{
            
           }

        }
        sort(results.rbegin(),results.rend());
        int sum=0;
        for(int i=0 ; i<results.size() ; i=i+2){
             
             sum=sum+results[i];


        }
        cout<<sum<<endl;

    }
    return 0;

}