#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T; cin >> T;

    while (T--) { 
        string A, B; cin >> A >> B;

        swap(A[0], B[0]);

        cout << A << " " << B << "\n";
    }
    return 0;
}   