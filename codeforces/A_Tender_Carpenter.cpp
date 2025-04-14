#include <bits/stdc++.h>
using namespace std;

void solve () { 
    int N; cin >> N;

    vector<int> A(N); 
    for (int i = 0; i < N; i++) { 
        cin >> A[i];

        cout << A[i];
    }
    cout << endl;
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
