#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string S;
    getline(cin, S);

    bool alive = false;
    bool undead = false;

    for (int i = 0; i < S.length() - 1; i++) { 
        if (S[i] == ':' && S[i + 1] == ')') { 
            alive = true;
        } else if (S[i] == ':' && S[i + 1] == '(') { 
            undead = true;
        }
    }

    if (alive && undead) {
        cout << "double agent" << endl;
    } else if (alive) {
        cout << "alive" << endl;
    } else if (undead) {
        cout << "undead" << endl;
    } else {
        cout << "machine" << endl;
    }

    return 0;
}
