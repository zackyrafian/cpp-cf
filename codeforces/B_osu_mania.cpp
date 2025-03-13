#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    while (T--) { 
        int N; cin >> N;
        vector<int> C(N);

        for (int i = 0; i < N; i++) { 
            char S;
            for (int j = 0; j < 4; j++) { 
                cin >> S;
                if (S == '#') {
                    C[N - 1 - i] = j + 1;
                }
            }
        }

        for (int i = 0; i < N; i++) { 
            cout << C[i];

            if (i < N - 1) { 
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}