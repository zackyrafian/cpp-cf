#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int y = 2020; 
    int t; cin >> t;
    int r = max(0,t - y);
    int isk = 1000;

    cout << r * 100 + isk;
    return 0;
}