#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    vector<string> s = {"flower","flow","flight"};

    for (int i = 0; i < s.size(); i++) { 
        if (s[i][i] == s[i + 1][i + 1]) { 
            cout << i;
        }
    }

    return 0;
}