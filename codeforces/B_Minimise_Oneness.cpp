#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string result = "1" + string(n - 1, '0');

    cout << result << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}