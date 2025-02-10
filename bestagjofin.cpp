#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    string na; 
    int max = INT_MIN;

    while (t--) {
        string s; int n;
        cin >> s >> n;
        
        if (n > max) { 
            max = n;
            na = s;
        }
        
    }

    cout << na << endl;

    return 0;
}