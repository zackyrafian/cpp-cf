#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;

    while (T--) { 
        int A, B; cin >> A >> B;

        if (A >= B) { 
            cout << A;
        } else if (B - A > A) {
            cout << 0;
        } else { 
            cout << 2 * A - B;
        }
        cout << endl;
    }

    return 0;
}