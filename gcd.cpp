#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int A, B; cin >> A >> B;

    while (B != 0) { 
        int R = A % B;
        A = B;
        B = R;
    }

    cout << A;

    return 0;
}
