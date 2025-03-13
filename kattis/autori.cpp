#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s, r; 
    cin >> s;

    if (!s.empty()) { 
        r += s[0];
    }

    for (size_t i = 1; i < s.length(); i++) {
        if (s[i] == '-' && i + 1 < s.length()) {
            r += s[i + 1];
        }
    }

    cout << r << endl;
    return 0;
}
