#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;

    for (int i = 0; i < t; i++) { 
        int n; cin >> n;

        if (n % 2 == 0) { 
            cout << n << " is even" << endl;
        } else { 
            cout << n << " is odd" << endl;
        }
    }

    return 0;
}