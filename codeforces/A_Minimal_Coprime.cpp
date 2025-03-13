#include <bits/stdc++.h>

using namespace std; 

void solve () { 
    int l, r;
    cin >> l >> r; 

    int result = 0;
    
    result = r - l;

    if (r == l && r <= 1) { 
        result = r;
    }
    
    cout << result << endl;
}

int main () { 
    int t; cin >> t; 

    while (t--) { 
        solve();
    }
}

