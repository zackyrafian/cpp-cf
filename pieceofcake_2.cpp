#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N, H, V;
    cin >> N >> H >> V;

    int R = max({H * V, H * (N - V), (N - H) * V, (N - H) * (N - V)}) * 4;
    cout << R;
    return 0;
}