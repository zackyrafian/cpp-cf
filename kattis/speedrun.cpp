#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int G, N;
    cin >> G >> N;
    vector<pair<int, int>> T(N);

    for (int i = 0; i < N; i++) {
        cin >> T[i].first >> T[i].second;
    }

    sort(T.begin(), T.end(), [](pair<int, int> A, pair<int, int> B) {
        return A.second < B.second;
    });

    int C = 0; 
    int last_time = -1;

    for (int i = 0; i < N; i++) {
        if (T[i].first >= last_time) {
            C++;
            last_time = T[i].second;
        }

        if (C >= G) { 
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO";
    return 0;
}