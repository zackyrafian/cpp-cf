#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int D, A, B, H;
    cin >> D >> A >> B >> H;

    double M = M_PI * (D / 2.0) * (D / 2.0);
    double T = (A + B) * H / 2.0;

    if (M > T) {
        cout << "Mahjong!";
    } else if (M < T) { 
        cout << "Trapizza!";
    } else { 
        cout << "Jafn storar!";
    }

    return 0;
}