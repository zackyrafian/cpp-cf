#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int A, B, C;
    cin >> A >> B >> C;

    if (A <= B && A <= C) {
        cout << "Monnei" << endl;
    } else if (B <= A && B <= C) {
        cout << "Fjee" << endl;
    } else {
        cout << "Dolladollabilljoll" << endl;
    }

    return 0;
}
