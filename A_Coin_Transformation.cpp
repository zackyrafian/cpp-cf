#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll maxCoins(ll N) { 
    return 1LL << ((63 - __builtin_clzll(N)) / 2); 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    while (T--) { 
        ll N; 
        cin >> N; 

        cout << maxCoins(N) << endl;
    }

    return 0;
} 