#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n; 
    int e = 0;
    while (n--) { 
        int d;
        cin >> d;

        if (d % 2 != 0) {
            e++;
        }
    }

    cout << e;

    return 0;
}