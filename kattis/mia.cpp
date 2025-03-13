#include <bits/stdc++.h>
using namespace std;

int calculate(int A, int B) {
    if ((A == 1 && B == 2) || (A == 2 && B == 1)) return 100;
    if (A == B) return 90 + A; 
    return max(A, B) * 10 + min(A, B);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int A, B, C, D;
    
    while (cin >> A >> B >> C >> D) {
        if (A == 0 && B == 0 && C == 0 && D == 0) break;

        int P1 = calculate(A, B);
        int P2 = calculate(C, D);

        if (P1 > P2) cout << "Player 1 wins." << endl;
        else if (P2 > P1) cout << "Player 2 wins." << endl;
        else cout << "Tie." << endl;
    }

    return 0;
}
