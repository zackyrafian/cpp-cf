#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    while (T--) { 
        int N; cin >> N; 
        
        if (N % 2 == 0) { 
            cout << "Sakurako" << endl;
        } else { 
            cout << "Kosuke" << endl;
        }
    }

    return 0;
}