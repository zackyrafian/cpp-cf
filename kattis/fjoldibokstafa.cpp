#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string S; cin >> S;
    int R = 0;

    for (char c : S) { 
        if (islower(c) || isupper(c)) { 
            R++;
        }
    }
    
    cout << R;

    return 0;
}