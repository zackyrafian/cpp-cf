#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int N, D; cin >> N >> D;

    long long P = 1;

    while (P <= 1e9) { 
        if (P > N) { 
            cout << "YES";
            return 0;
        }
        P *= D;
        
        if (D == 1) break;
    }

    cout << "NO";
    return 0;
}