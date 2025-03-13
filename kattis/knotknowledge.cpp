#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;

    vector<int> X(N);
    vector<int> Y(N - 1);

    for (int i = 0; i < X.size(); i++) {
        cin >> X[i];
    }

    for (int i = 0; i < Y.size(); i++) {
        cin >> Y[i];
    }

    unordered_set<int>set(Y.begin(), Y.end());
    for (int n : X) { 
        if (set.find(n) == set.end()) { 
            cout << n;
        }
    }
    return 0;
}