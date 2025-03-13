#include <bits/stdc++.h>
using namespace std;

void solve () { 
    int n; cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) { 
        cin >> arr[i];
    }
    
    int minDis = INT_MAX;
    for (int i = 1; i < n; i++) {  
        int dis = arr[i] - arr[i - 1]; 
        minDis = min(minDis, dis); 
    }

    if (minDis <= 1) { 
        cout << "NO";
    } else { 
        cout << "YES";
    }
    cout << endl;
}

int main () { 
    int t; cin >> t;

    while (t--) {
        solve();
    }
}