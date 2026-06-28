#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    while (T--) { 
        int A, B; cin >> A >> B;
        
        if (A <= B) { 
            A -= B; 
        }

        cout << abs(A);
        cout << endl;
    }

    return 0;
}