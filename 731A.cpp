#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    char curr = 'a';
    int ans = 0;

    for(int i = 0; i < s.size(); i++) {

        int diff = abs(s[i] - curr);

        ans += min(diff, 26 - diff);

        curr = s[i];
    }

    cout << ans;

    return 0;
}