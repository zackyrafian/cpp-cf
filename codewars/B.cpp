#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int num = 9119;
    int R = 0; 
    vector<int> V;

    while (num > 0) { 
        V.pb(num % 10);
        num /= 10;
    }
    reverse(V.begin(), V.end());

    for (int i = 0; i < V.size(); i++) { 
        R = V[i] * V[i];
        cout << R;
    }

    return 0;
}