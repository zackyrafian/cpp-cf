#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) { 
    if (n < 2) return false; 
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;

    if (isPrime(N) && N < 7){ 
        cout << "YES\n";
    } else { 
        cout << "NO\n";
    }

    return 0;
}