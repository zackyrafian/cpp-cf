#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long

int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    
    int t; 
    cin >> t;
    cin.ignore();
    
    while (t--) {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        
        int min_val = min({x1, x2, x3});
        int max_val = max({x1, x2, x3});
        
        int minimum = INT_MAX; 
        
        for (int i = min_val; i <= max_val; ++i) { 
            int p = abs(i - x1) + abs(i - x2) + abs(i - x3);
            minimum = min(minimum, p);
        }
        
        cout << minimum << endl;
    }
    
    return 0;
}