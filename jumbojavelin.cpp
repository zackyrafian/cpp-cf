#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    int R = 0;
    for (int i = 0; i < N; i++) { 
        int T; cin >> T;
        R += T;
    }
    R -= N - 1; 
    cout << R;

    return 0;
}