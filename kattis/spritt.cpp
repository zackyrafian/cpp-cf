#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t, n;
    int r = 0;
    cin >> t >> n;
    while(t--) { 
        int x;
        cin >> x;
        r += x;
    }

    if (r > n) {
        cout << "Neibb" << endl;
    } else {
        cout << "Jebb" << endl;
    }

    return 0;
}
