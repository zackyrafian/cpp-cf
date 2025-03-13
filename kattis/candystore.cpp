#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, Q;
    cin >> N >> Q;
    unordered_map<string, vector<string>> initialsMap;

    while (N--) {
        string firstName, lastName;
        cin >> firstName >> lastName;
        initialsMap[firstName.substr(0, 1) + lastName.substr(0, 1)].push_back(firstName + " " + lastName);
    }

    while (Q--) {
        string query;
        cin >> query;

        if (initialsMap.find(query) == initialsMap.end()) {
            cout << "nobody" << endl;
        } else if (initialsMap[query].size() == 1) {
            cout << initialsMap[query][0] << endl;
        } else {
            cout << "ambiguous" << endl;
        }
    }
    return 0;
}