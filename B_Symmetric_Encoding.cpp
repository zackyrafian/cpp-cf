#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string b;
        cin >> b;
        
        set<char> unique_chars(b.begin(), b.end());
        string r(unique_chars.begin(), unique_chars.end());
        
        unordered_map<char, char> map;
        int len_r = r.size();
        for (int i = 0; i < len_r; i++) {
            map[r[i]] = r[len_r - 1 - i];
        }
        
        string s;
        for (char c : b) {
            s += map[c];
        }
        
        cout << s << endl;
    }
    
    return 0;
}