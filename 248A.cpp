#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int leftcount0 = 0, leftcount1 = 0;
    int rightcount0 = 0, rightcount1 = 0;

    for (int i = 0; i < n; i++) {
        int li, ri;
        cin >> li >> ri;

        if (li == 0) leftcount0++;
        else leftcount1++;

        if (ri == 0) rightcount0++;
        else rightcount1++;
    }

    int leftOps = min(leftcount0, leftcount1);
    int rightOps = min(rightcount0, rightcount1);

    cout << leftOps + rightOps;
    return 0;
}
