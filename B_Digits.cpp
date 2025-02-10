#include <iostream>

using namespace std;
void solve () { 
    int n, d;
    cin >> n >> d;
    int f = 1;
    int s = 0;

    for (int i = 1; i <= n; i++) { 
        f *= i;
    }
  
    cout << "!"<< n << ":" << f << endl;
}

int main () { 
    int t; cin >> t;

    while (t--) { 
        solve();
    }
}