#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N = 4; 
    vector<int> T(N);
    vector<int> G(N);
    int R = 0; 
    int S = 0;

    for (int i = 0; i < N; i++) { 
        cin >> T[i];
        R += T[i];
    }

    for (int i = 0; i < N; i++ )  {
        cin >> G[i];
        S += G[i];
    }

    if (R > S)  {
        cout << "Gunnar"; 
    } else if ( R == S ) { 
        cout << "Tie";
    } else { 
        cout << "Emma";
    }

    return 0;
}