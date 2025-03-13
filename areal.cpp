#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long A;
    cin >> A;

    double S = sqrt(static_cast<double>(A));

    cout << fixed << setprecision(6) << 4.0 * S;

    return 0;
}