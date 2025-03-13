#include <bits/stdc++.h>

using namespace std;

int main () {
    int t; cin >> t; 

    while(t--) { 
        vector<int>a(3);
        vector<int>b(3);

        int aMax = 0;
        int bMax = 0;
        for (int i = 0; i < 3; i++){ 
            cin >> a[i];
        }
        for (int i = 0; i < 3; i++) { 
            cin >> b[i];
        }
        sort(a.begin(), a.end() ,greater<int>());
        sort(b.begin(), b.end() ,greater<int>());
        
        aMax = a[0] + a[1];
        bMax = b[0] + b[1];

        // cout << aMax;
        // cout << bMax;

        if (aMax > bMax) { 
            cout << "Alice";
        } else if (aMax == bMax) { 
            cout << "Tie";
        } else { 
            cout << "Bob";
        }
        cout << endl;
    }
}