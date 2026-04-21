#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> height(n);

    for(int i=0; i<n; i++){
        cin >> height[i];
    }

    int mini = INT_MAX;
    int a = 1, b = 2;

    for(int i=0; i<n-1; i++){

        int diff = abs(height[i] - height[i+1]);

        if(diff < mini){
            mini = diff;
            a = i + 1;      
            b = i + 2;
        }
    }

    int diff = abs(height[n-1] - height[0]);

    if(diff < mini){
        a = n;
        b = 1;
    }

    cout << a << " " << b;

    return 0;
}