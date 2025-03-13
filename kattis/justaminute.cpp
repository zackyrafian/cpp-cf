#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int T; cin >> T;
    double rM = 0;
    double rS = 0;

    while (T--) { 
        double M, S;
        cin >> M >> S;
        rM += M;
        rS += S;
    }
    double result = rS / rM;

    if (result <= 60.0) { 
        cout << "measurement error" << endl;
    } else {
        cout << fixed << setprecision(9) << result / 60.0 << endl;
    }
    return 0;
}