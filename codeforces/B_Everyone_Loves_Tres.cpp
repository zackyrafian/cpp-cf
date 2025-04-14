#include <bits/stdc++.h>
using namespace std;

string solve(int N) {
    if (N == 1) return "-1";
    string result(N, '3');
    result[N - 1] = '6';

    int sum = 3 * (N - 1) + 6;
    if (sum % 3 != 0) return "-1";

    int even = 0, odd = 0;
    for(int i = 0; i < N; i++) { 
        if (i % 2 == 0) odd += result[i] - '0';
        else even += result[i] - '0';
    }

    if ((odd - even) % 11 != 0) return "-1";
    return result;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    while (T--) { 
        int N; cin >> N;
        cout << solve(N) << endl;
    }

    return 0;
}