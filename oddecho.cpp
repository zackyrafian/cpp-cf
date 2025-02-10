#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    string c;

    vector<string> s;
    for (int i = 0; i < t; i++) { 
        cin >> c;
        s.push_back(c);
        if (i % 2 == 0) { 
            cout << s[i] << endl;
        } 
    }
    

    return 0;
}