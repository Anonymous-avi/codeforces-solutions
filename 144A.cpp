#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxVal = a[0], minVal = a[0];
    int maxIndex = 0, minIndex = 0;

    // find leftmost max and rightmost min
    for (int i = 0; i < n; i++) {
        if (a[i] > maxVal) {
            maxVal = a[i];
            maxIndex = i;
        }
        if (a[i] <= minVal) {
            minVal = a[i];
            minIndex = i;
        }
    }

    int swaps = maxIndex + (n - 1 - minIndex);

    // if max is before min, one swap overlaps
    if (maxIndex > minIndex) {
        swaps--;
    }

    cout << swaps;
    return 0;
}