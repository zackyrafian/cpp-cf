#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    set<int> modulo;
    for (int i = 0; i < 10; i++) { 
        int n; 
        cin >> n;

        modulo.insert(n % 42);
    }

    cout << modulo.size() << endl;
    return 0;
}