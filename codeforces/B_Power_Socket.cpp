#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int A, B; cin >> A >> B; 
    int sockets = 1; 
    int strips = 0; 

    while (sockets < B) { 
        sockets += (A - 1); 
        strips++; 
    }

    cout << strips;
    return 0;
}