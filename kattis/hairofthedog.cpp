#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    int r = 0;
    string p, s;
    cin >> p;

    for (int i = 0; i < t; i++) {
        cin >> s;

        if (p == "drunk" && s == "sober") { 
            r++;
        }
        p = s;
    }
    cout << r;
    return 0;
}
