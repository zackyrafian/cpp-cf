#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c; 
    cin >> a >> b >> c; 
    a += b;

    if (a == c) {
        cout << "correct!" << endl;
    } else { 
        cout << "wrong!" << endl;
    }

    return 0;
}