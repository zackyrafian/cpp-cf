#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T; 
    while (T--) { 
        int K; cin >> K;
    
        if (K == 1) { 
            cout << "YES\n";
        } else if (K % 3 == 2) { 
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }

    }

    return 0;
}
