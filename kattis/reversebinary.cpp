#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, result = 0;
    cin >> N;

    while (N > 0) {
        result = (result << 1) | (N & 1); 
        N >>= 1;
    }

    cout << result << endl;

    return 0;
}