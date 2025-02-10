#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string S; getline(cin, S);

    for (int i = 0; i < S.length(); i++){
        if (S[i] != ' ') { 
            cout << S[i];
        }
    }
    return 0;
}