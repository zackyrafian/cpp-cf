#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n), b(n);
    long long total_korban = 0, kekurangan = 0;
    
    for (int i = 0; i < n; i++) cin >> a[i]; 
    for (int i = 0; i < n; i++) cin >> b[i]; 
    
    for (int i = 0; i < n; i++) {
        if (a[i] >= b[i]) {
            total_korban += (a[i] - b[i]);
        } else {
            kekurangan += (b[i] - a[i]);
        }
    }
    
    if (total_korban >= kekurangan) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
