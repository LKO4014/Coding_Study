#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (cin >> s && s != "0") { // "0"이면 종료
        int rem = 0;
        for (char c : s) {
            rem = (rem + (c - '0')) % 9;
        }
        cout << (rem == 0 ? 9 : rem) << "\n";
    }
    return 0;
}
