#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    vector<pair<int, int>> T(N);
    for (int i = 0; i < N; i++) {
        cin >> T[i].first >> T[i].second;
    }

    int minB = 0;
    int maxB = 1e9;

    for (auto &[A, B] : T)  {
        minB = max(minB, A);
        maxB = min(maxB, B);
    }

    if (minB <= maxB) cout << "gunilla has a point";
    else cout << "edward is right";
    return 0;
}