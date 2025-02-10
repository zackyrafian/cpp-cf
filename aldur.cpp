#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    
    int minA = INT_MAX;

    for (int i = 0; i < t; i++) { 
        int a; cin >> a;
        minA = min(minA, a);
    }

    cout << minA;

    return 0;
}