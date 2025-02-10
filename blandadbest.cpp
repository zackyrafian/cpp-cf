#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    string s;
    for (int i = 0; i < n; i++) { 
        cin >> s;
    }

    if (n > 1) {
        cout << "blandad best" << endl;
    } else { 
        cout << s;
    }
    return 0;
}