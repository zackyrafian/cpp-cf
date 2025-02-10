#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<pair<int, int>> data = {{1, 7}, {5, 5}, {4, 8}};

    for (auto &[a, b] : data) {
        cout << a << b << endl;
    }
    return 0;
}