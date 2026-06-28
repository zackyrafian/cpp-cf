#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;cin >> T;
    
    for (int i = 0; i < T; i++) { 
        int a; cin >> a;
        string s; cin >> s;

        for (int x = 0; x < s.length(); x++) { 
            if (s[(a / 2) + 1] != 0 && a >= 4) { 
                cout << "No";
            } 
        }
    }
    

    return 0;
}
