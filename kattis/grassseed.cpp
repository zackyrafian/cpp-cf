#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    double C, L, W;
    cin >> C >> L;
    double A = 0; 

    for (int i = 0; i < L; i++) { 
       double L1; cin >> W >> L1;
        W *= L1;
        A += W;
    }

    cout << fixed << setprecision(7) << A * C << endl;

    return 0;
}