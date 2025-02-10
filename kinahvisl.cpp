#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s1; cin >> s1; 
    string s2; cin >> s2; 
    int r = 1;
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
            r++;
        }
    }

    cout << r;
    
    return 0;
}