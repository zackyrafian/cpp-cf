#include <bits/stdc++.h>
using namespace std;

char solve (char C) {
    if (C == 'p') return 'q';
    if (C == 'q') return 'p';
    return 'w';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int T; cin >> T;

    while (T--) { 
        string S; cin >> S;
        string B = "";

        reverse(S.begin(), S.end());

        for (char &C : S) { 
            C = solve(C);
        }

        cout << S << endl;
    }

    return 0;
}