#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int P, Q;
    cin >> P >> Q;

    int R = (P * P) + (Q * Q) + 1; 
    if (R % 4 == 0) { 
        cout << R / 4 << '\n';
    } else { 
        cout << -1 << '\n';
    }

    return 0;
} 