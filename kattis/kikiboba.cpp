#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    int count_b = 0, count_k = 0;
    for (char c : s) {
        if (c == 'b') count_b++;
        if (c == 'k') count_k++;
    }

    if (count_b == 0 && count_k == 0) {
        cout << "none\n";
    } else if (count_b > count_k) {
        cout << "boba\n";
    } else if (count_k > count_b) {
        cout << "kiki\n";
    } else {
        cout << "boki\n";
    }

    return 0;
}