#include <iostream>
using namespace std;

bool distinctDigits(int year) {
    int freq[10] = {0};

    while (year > 0) {
        int digit = year % 10;
        if (freq[digit] == 1)
            return false;
        freq[digit] = 1;
        year /= 10;
    }

    return true;
}

int main() {
    int y;
    cin >> y;

    while (true) {
        y++;
        if (distinctDigits(y)) {
            cout << y;
            break;
        }
    }

    return 0;
}