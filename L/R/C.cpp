#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s = "([])"; 
    // cin >> s;

    int n = 0;
    for (int i = 0; i < s.length(); i++) { 
        if 
        (s[i] == '(' && s[i + 1] == ')' ||
        s[i] == '{' && s[i + 1] == '}' || 
        s[i] == '[' && s[i + 1] == ']' 
        )  {
             cout << "YES" << endl;
        } else { 
            cout << "NO" << endl;
        }
    }

    // cout << n;
    return 0;
}