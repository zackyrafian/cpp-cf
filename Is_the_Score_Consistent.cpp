#include <iostream>
using namespace std;

void solve() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if (C >= A && D >= B) {
        cout << "POSSIBLE" << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }
}

int main() {
    int T;
    cin >> T; 

    while (T--) {
        solve(); 
    }

    return 0;
}
