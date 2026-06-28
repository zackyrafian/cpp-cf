#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;

    while (T--) { 
        int K; cin >> K;
        if (K % 2 == 0) { 
            cout << "NO";
        } else { 
            cout << "YES";
        }
        cout << endl;
    }

    return 0;
}
