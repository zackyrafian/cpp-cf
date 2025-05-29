#include <bits/stdc++.h>
using namespace std;

void simplifySquareRoot(int n) {
    for (int i = sqrt(n); i >= 1; --i) {
        int square = i * i;
        if (n % square == 0) {
            int outside = i;
            int inside = n / square;
            if (inside == 1) {
                cout << "Simplified: " << outside << endl;
            } else {
                cout << "Simplified: " << outside << "√" << inside << endl;
            }
            return;
        }
    }
    cout << "Simplified: √" << n << endl; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n ; cin >> n;
    simplifySquareRoot(n);
    return 0;
}