#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while(t--) { 
        long long l, r, k;
        cin >> l >> r >> k;

        if (l == r) { 
            if (l == 1) cout << 0 << endl;
            else cout << 1 << endl;
            continue;
        }

        long long total = r - l + 1;
        long long odd = (r + 1) / 2 - l / 2;

        if (odd <= k) cout << 1;
        else cout << 0; 
        
        cout << endl;
    }

    return 0;
}