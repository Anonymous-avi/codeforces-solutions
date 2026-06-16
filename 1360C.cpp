#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        int odd = 0, even = 0;

        for(int i = 0; i < n; i++) {
            cin >> arr[i];

            if(arr[i] % 2)
                odd++;
            else
                even++;
        }

        if(odd % 2 == 0 && even % 2 == 0) {
            cout << "YES\n";
            continue;
        }

        sort(arr.begin(), arr.end());

        bool found = false;

        for(int i = 0; i < n - 1; i++) {
            if(arr[i + 1] - arr[i] == 1) {
                found = true;
                break;
            }
        }

        if(found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}