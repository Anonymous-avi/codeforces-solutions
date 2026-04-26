#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int g = -1, t = -1;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'G') g = i;
        if(s[i] == 'T') t = i;
    }

    if(g < t) {
        for(int i = g; i <= t; i += k) {
            if(s[i] == '#') {
                cout << "NO";
                return 0;
            }
            if(s[i] == 'T') {
                cout << "YES";
                return 0;
            }
        }
    } 
    else {
        for(int i = g; i >= t; i -= k) {
            if(s[i] == '#') {
                cout << "NO";
                return 0;
            }
            if(s[i] == 'T') {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
    return 0;
}