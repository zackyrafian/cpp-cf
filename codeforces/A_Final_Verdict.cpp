#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int t; cin >> t;
     
    while (t--) { 
        int n, x;
        cin >> n >> x; 
        vector<int> a(n);

        int sum = 0;

        for (int i = 0; i < n; i++) { 
            cin >> a[i];
            sum += a[i];
        }

        if (sum == n * x) { 
            cout << "YES"; 
        } else {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}