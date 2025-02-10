#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int x = 0;

    if (n == 1) {
        x = 2;
    } else if (n <= 3) { 
        x = n / 3;
    } else { 
        x = (n + 2) / 3;
    }
    cout << x << endl;

}

int main () { 
    int t; 
    cin >> t;

    while (t--) { 
        solve();
    }
    return 0;
}
