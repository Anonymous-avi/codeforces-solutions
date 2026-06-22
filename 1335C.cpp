#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        map<int, int> freq;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int distinct = freq.size();
        int maxFreq = 0;

        for(auto &p : freq) {
            maxFreq = max(maxFreq, p.second);
        }

        int ans = max(
            min(maxFreq - 1, distinct),
            min(maxFreq, distinct - 1)
        );

        cout << ans << "\n";
    }

    return 0;
}