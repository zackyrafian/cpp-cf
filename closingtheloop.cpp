#include <bits/stdc++.h>
using namespace std;

void solve() { 
    int N;
    cin >> N;
    
    vector<int> R, B;
    
    for (int i = 0; i < N; i++) {
        int S; char L;
        cin >> S >> L;
        if (L == 'R') R.push_back(S);
        else B.push_back(S);
    }

    sort(R.rbegin(), R.rend());
    sort(B.rbegin(), B.rend());

    int maxPairs = min(R.size(), B.size());
    int totalLength = 0;

    for (int i = 0; i < maxPairs; i++) {
        totalLength += (R[i] - 1); 
        totalLength += (B[i] - 1); 
    }

    cout << totalLength << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T; 
    for (int t = 1; t <= T; t++) {
        cout << "Case #" << t << ": ";
        solve();
    }

    return 0;
}
