#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string S; 
    cin >> S;
    int R = 0; 
    string prev; 

    for(int i = 0; i < S.length(); i++) {
        if (S[i] == 's' && S[i + 1] == 's') { 
            R++;
        }
    }
    if (R > 0) { 
        cout << "hiss";
    } else { 
        cout << "no hiss";
    }

    return 0;
}