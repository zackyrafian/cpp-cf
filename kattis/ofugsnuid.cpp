#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    vector<int> a(t);

    for (int i = 0; i < t; i++) {
        cin >> a[i];
    }

    reverse(a.begin(), a.end()); 

    for (int i : a) { 
        cout << i << endl;
    }

    return 0;
}