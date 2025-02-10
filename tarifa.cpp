#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int X, N; cin >> X >> N; 

    int result = 0; 

    for (int i = 0; i < N; i++) {
        int U; cin >> U;
        result =  (result + X) - U;
    }

    cout << result + X << endl;
    return 0;
}
