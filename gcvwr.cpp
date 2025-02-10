#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int G, T, N; 
    int R = 0;
    cin >> G >> T >> N;

    G -= T; G *= 0.9;

    while (N--) { 
        int W; cin >> W;
        R += W;
    }

    cout << G - R << endl;
    return 0;
}