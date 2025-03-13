#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int D = -1, W = -1;

    for (int i = 1; i <= 5; i++) { 
        int sum = 0, x;
        for (int j = 0; j < 4; j++) { 
            cin >> x;
            sum += x;
        }

        if (sum > D) { 
            D = sum;
            W = i;
        }
    }

    cout << W << " " << D << endl;
    return 0;
}