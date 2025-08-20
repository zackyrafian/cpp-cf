#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T, L, R;
    cin >> T >> L >> R;

    int result = 0; 

    while(T--) { 
        int X, Y;
        cin >> X >> Y;

        if (X <= L && Y >= R) { 
            result++;
        }
    }

    cout << result;

    return 0;
}