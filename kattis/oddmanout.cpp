#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    for (int i = 1; i <= t; i++) { 
        int n;
        cin >> n;

        int z = 0;

        for (int i = 0; i < n; i++) { 
            int x;
            cin >> x; 
            z ^= x;
        }
        cout << "Case #" << i << ": " << z << endl;
    }
    
    return 0;   
}