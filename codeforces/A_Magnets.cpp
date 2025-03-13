#include <iostream> 

using namespace std;

void solve () { 
    int n; cin >> n;

    int x = 0; 
    string prev, s;

    for (int i = 0; i < n; i++) { 
        cin >> s;
        if (s != prev) {
            x++;
        }
        prev = s;
    }

    cout << x << endl;
}
int main () { 
    solve();
}