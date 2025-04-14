#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    while (T--) { 
        int L, R, D, U; cin >> L >> R >> D >> U;

        if (L == R && L == D && L == U) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
        
    }

    return 0;
}
