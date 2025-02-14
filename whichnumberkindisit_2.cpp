#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;

    for (int i = 0; i < T; i++ ) {
        int N; cin >> N;
        int root = static_cast<int>(sqrt(N));
        bool isOdd = (N % 2 != 0);
        bool isPerfectSquare = (root * root == N);

        if (isOdd && isPerfectSquare) {
            cout << "OS" << endl;
        } else if (isOdd) {
            cout << "O" << endl;
        } else if (isPerfectSquare) {
            cout << "S" << endl;
        } else {
            cout << "EMPTY" << endl;
        }
    }
    return 0;
}