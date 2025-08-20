#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int A, X; cin >> A >> X; 

    int N = X / A;
    int M = X % A;

    cout << N << " " << M;

    return 0;
}