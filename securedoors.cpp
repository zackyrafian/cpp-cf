#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N; cin >> N;
    cin.ignore();

    unordered_set<string> B;

    while (N--) { 
        string A, N; 

        cin >> A >> N;

        if (A == "entry") { 
            if (B.count(N)) {
                cout << N << " entered (ANOMALY)" << endl;
            } else {
                cout << N << " entered" << endl;
                B.insert(N);
            }
        } else if (A == "exit") {
            if (!B.count(N)) { 
                cout << N << " exited (ANOMALY)" << endl;
            } else { 
                cout << N << " exited" << endl;
                B.erase(N);
            }
        } 
    }

    return 0;
}