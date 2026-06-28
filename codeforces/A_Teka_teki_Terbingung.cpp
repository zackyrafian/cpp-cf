#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N; 
    
    for (int i = 1; i <= sqrt(N); i++) {
        if (N % i == 0) {
            int a = i;
            int b = N / i;
            cout << a << " " << b << "\n";
            return 0;
        }
    }
    return 0;
}