#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T; cin >> T;

    while (T--) { 
        int R, E, C; cin >> R >> E >> C;

        if ((E - C) > R)  { 
            cout << "advertise" << endl;
        } else if ((E - C) == R) { 
            cout << "does not matter" << endl;
        } else { 
            cout << "do not advertise" << endl;
        }
    }
    return 0;
}
