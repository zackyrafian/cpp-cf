#include <bits/stdc++.h>
using namespace std;

bool solve(int n, vector<int>& p) {
    vector<int> pos(n + 1);
    for (int i = 0; i < n; ++i) {
        pos[p[i]] = i;
    }

    for (int x = 1; x <= n; ++x) {
        int idx = pos[x]; 

        while (idx != x - 1) {
            if (idx > 0 && abs(p[idx] - p[idx - 1]) == 1) {
                swap(p[idx], p[idx - 1]);
                pos[p[idx]] = idx;
                pos[p[idx - 1]] = idx - 1;
                --idx; 
            }
            else if (idx < n - 1 && abs(p[idx] - p[idx + 1]) == 1) {
                swap(p[idx], p[idx + 1]);
                pos[p[idx]] = idx;
                pos[p[idx + 1]] = idx + 1;
                ++idx; 
            }
            else {
                return false;
            }
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }

        if (solve(n, p)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}