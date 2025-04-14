#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;

    while (T--) { 
        int N, K; cin >> N >> K;
        long long F = 0;
        
        for (int i = max(1, N - K + 1); i <= N; i++) { 
            F += (long long)i * i;
        }

        if (F % 2 == 0) { 
            cout << "YES\n";
        } else { 
            cout << "NO\n";
        }

    }

    return 0;
} 