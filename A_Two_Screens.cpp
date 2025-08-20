#include <bits/stdc++.h>
using namespace std;

int LCP(const string& s, const string& t) { 
    int len = 0; 
    int n = min(s.size(), t.size());
    while (len < n && s[len] == t[len]) { 
        len++; 
    }

    return len;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int q; cin >> q; 
    while (q--) { 
        string s, t; cin >> s >> t;
        int lcp = LCP(s, t);

        int x = s.size() + t.size();
        int y = s.size() + t.size() - lcp + 1;

        cout << min(x, y) << endl;
    } 

    return 0;
}