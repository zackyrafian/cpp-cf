#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n; 
    vector<int> t(n);

    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    sort(t.rbegin(), t.rend());

    int h = 0; 
    for (int i = 0; i < n; i++) {
        int c = i + 1 + t[i];
        h = max(h, c);
    }

    cout << h + 1; 
    
    return 0;
}