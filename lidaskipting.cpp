#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long N; cin >> N;

    if (N % 3 == 0) { 
        cout << "Jebb";
    } else { 
        cout << "Neibb";
    }

    return 0;
}