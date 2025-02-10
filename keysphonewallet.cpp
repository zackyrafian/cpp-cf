#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    set<string> items;
    while (t--) {
        string item;
        cin >> item;
        items.insert(item);
    }

    vector<string> missing;
    vector<string> essentials = {"keys", "phone", "wallet"};

    for (const string& e : essentials) {
        if (!items.count(e)) {
            missing.push_back(e);
        }
    }

    if (missing.empty()) {
        cout << "ready\n";
    } else {
        for (const string& item : missing) {
            cout << item << '\n';
        }
    }

    return 0;
}
