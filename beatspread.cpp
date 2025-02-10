#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;

    while(t--) { 

        int s, d; 
        cin >> s >> d;
        
        int a = (s + d) / 2; 
        int b = (s - d) / 2;
        
        if ((s + d) % 2 != 0 || (s - d) % 2 != 0 || b < 0) {
            cout << "impossible" << endl;
        } else { 
            cout << a << " " << b << endl;
        }
    
    }
    return 0;
}