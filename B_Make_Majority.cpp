#include <bits/stdc++.h>

using namespace std;

void solve() { 
    int c1;
    string c2; 
    cin >> c1;
    cin >> c2;

    if (c2[0] == '0') { 
        cout << "No" << endl;
        return;
    }
    int temp = stoi(c2);
    if (c1 <= temp)  {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main () { 
    int t; cin >> t;
    while (t--) { 
        solve();
    }
}
