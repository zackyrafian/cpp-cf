#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;

    while (T--) { 
        int N, K; cin >> N >> K;
        vector<int> A(N);

        int G = 0;
        int C = 0;

        for (int i = 0; i < N; i++) { 
            cin >> A[i];

            if (A[i] >= K) { 
                G += A[i];
                
            } else if (A[i] == 0 && G > 0) { 
                G--;
                C++;
            }
        } 
        cout << C << endl;  
    }

    return 0;
}