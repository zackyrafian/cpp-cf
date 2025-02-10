#include <bits/stdc++.h>

using namespace std;

void solve () { 
    int n; cin >> n; 
    vector<int> arr(n);

    int result = 0;
    for (int i = 0; i < n; i++) { 
        cin >> arr[i];

        if (i % 2 == 0) { 
            result += arr[i];
        } else { 
            result -= arr[i];
        }
    }
    cout << result << endl;
}

int main () { 
    int t; cin >> t; 

    while (t--) { 
        solve();
    }
}