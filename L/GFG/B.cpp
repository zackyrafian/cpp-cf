#include <bits/stdc++.h>
using namespace std;

int term(int n) { 

    // int t = 0;
    // for (int i = 1; i <= n; i++) { 
    //     t += i;
    // }

    return n * (n + 1) / 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n = 4; 

    cout << term(n);
    return 0;
}