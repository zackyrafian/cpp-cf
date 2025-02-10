#include <bits/stdc++.h>
using namespace std;

void solve(int N, int P, int S, vector<vector<int>> &s) { 
    set<int> C;
    for (int i = 1; i <= N; i++) { 
        C.insert(i);
    }

    for (auto &ss : s) { 
        int K = ss[0]; 
        set<int> selected(ss.begin() + 1, ss.end()); 

        if (selected.count(P)) { 
            cout << "KEEP" << endl;
            C = selected;
        } else { 
            cout << "REMOVE" << endl;
            for (int x : selected) { 
                C.erase(x);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, P, S;
    cin >> N >> P >> S;

    vector<vector<int>> s(S);
    for (int i = 0; i < S; i++) { 
        int K; cin >> K;
        s[i].resize(K + 1); 
        s[i][0] = K; 
        for (int j = 1; j <= K; j++) {
            cin >> s[i][j];
        }
    }

    solve(N, P, S, s);
    return 0;
}