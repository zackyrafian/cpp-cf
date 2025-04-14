#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;

    while (T--) { 
        int N; cin >> N;
         
        if (N % 33 == 0) { 
            cout << "YES";
        } else { 
            cout << "NO";
        } 
        cout << "\n";
    }

    return 0;
}   