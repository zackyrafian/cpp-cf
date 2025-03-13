#include <bits/stdc++.h>

using namespace std;

int main () { 
    int t; 
    cin >> t;

    while (t--) { 
        int n; 
        cin >> n; 

        vector<int> a(n);
        unordered_set<int> seen;

        bool x = false; 

        for (int i = 0; i < n; i++){ 
                cin >> a[i]; 
                if (seen.find(a[i]) != seen.end()) { 
                    x = true;
                }
                seen.insert(a[i]);
        }

        if(x){ 
            cout << "YES" << endl;
        } else { 
            cout << "NO" << endl;
        }
    }
}
 