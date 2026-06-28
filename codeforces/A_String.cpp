#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;

    while (T--) { 
        string s; cin >> s;
        int x = 0;
        for (int i = 0; i < s.length(); i++) { 
            if (s[i] == '1')  {
                x++;
            }
        }

        cout << x << endl;
    }

    return 0;
}