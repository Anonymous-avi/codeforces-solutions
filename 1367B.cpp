#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        int cnt1 = 0;  // even index, but odd value
        int cnt2 = 0;  // odd index, but even value
        
        for(int i = 0; i < n; i++){
            if(i % 2 == 0 && a[i] % 2 != 0){
                cnt1++;
            }
            else if(i % 2 != 0 && a[i] % 2 == 0){
                cnt2++;
            }
        }
        
        if(cnt1 != cnt2){
            cout << -1 << endl;
        }
        else{
            cout << cnt1 << endl;
        }
    }
    return 0;
}