#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    size_t pos = s.find('a');

    if (pos != string::npos) {
        cout << s.substr(pos) << '\n';
    }

    return 0;
}
