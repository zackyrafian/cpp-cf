#include <bits/stdc++.h>
using namespace std;

void solve () { 
    int N; 
    cin >> N; 
    int R = 0;
    unordered_map<int, int> A;

    for(int i = 0; i < N; i++) {
        int X; cin >> X;
        A[X]++;
    }

    for (auto& [num, count] : A) { 
        R += count / 2;
    }
    cout << R << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    while (T--) { 
        solve();
    }

    return 0;
}