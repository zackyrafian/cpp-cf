#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    double v0, a, t;
    cin >> v0 >> a >> t;

    double s = v0 * t + 0.5 * a * t * t;

    cout << fixed << setprecision(9) << s << endl;
    return 0;
}
