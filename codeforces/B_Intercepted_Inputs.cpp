#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    while (T--) { 
        int K; cin >> K;
        vector<int> A(K); 
        unordered_set<int>N;

        for (int i = 0; i < K; i++) { 
            cin >> A[i];
            N.insert(A[i]);
        }

        int total = K - 2;
        bool found = false;

        for (int n = 1; n <= total; n++) { 
            if (total % n == 0) { 
                int m = total / n; 

                if (N.count(n) && N.count(m)) { 
                    cout << n << " " << m << "\n";
                    found = true;
                    break;
                }

                if (n != m && N.count(m) && N.count(n)) { 
                    cout << m << " " << n << "\n";
                    found = true;
                    break;
                }
            }
        }

        if (!found) { 
            cout << "-1 -1\n";
        }

    }

    return 0;
}