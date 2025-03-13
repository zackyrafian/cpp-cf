#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string S; cin >> S;
    string prev;
    int C = 0;

    for (int i = 0; i < S.length(); i++) {
        if (S[i] == '(' && S[i + 1] == ')' || 
            S[i] == '[' && S[i + 1] == ']' || 
            S[i] == '{' && S[i + 1] == '}'
        ){ 
            C++;
        } 
    }

    if (C == 1) { 
        cout << "True";
    } else { 
        cout << "False";
    }

    return 0;
}