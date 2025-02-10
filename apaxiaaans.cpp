#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string S; cin >> S; 
    string A = "";
    A += S[0];

    for (int i = 1; i < S.length(); i++) { 
        if (S[i] != S[i - 1]) { 
            A += S[i];
        }
    }

    cout << A;
    return 0;
}