#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M; cin >> N >> M;
    vector<int> A(N);
    unordered_set<int> T;
        
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < M; i++) { 
        int S; cin >> S;
        T.insert(S);
    }

    vector<int> R; 
    for (int S: A) { 
        if (T.count(S)) { 
            R.push_back(S);
        }
    }

    for (int i = 0; i < R.size(); i++) { 
        cout << R[i];
        if (i != R.size() - 1) cout << " ";
    }


    return 0;
}