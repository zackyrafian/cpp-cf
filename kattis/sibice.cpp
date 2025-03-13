#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, W, L; 
    cin >> N >> W >> L;

    double D = sqrt(W * W + L * L);
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        if (A <= D) { 
            cout << "DA" << endl;
        } else { 
            cout << "NE" << endl;
        }
    }

    return 0;
}