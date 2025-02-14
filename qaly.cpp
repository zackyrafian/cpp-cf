#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    double R = 0.0;
    for (int i = 0; i < N; i++) {
        double A, B; cin >> A >> B;
        A *= B;
        R += A;
    }
    cout << fixed << setprecision(3) << R << endl;
    return 0;
}