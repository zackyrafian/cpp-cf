#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;
    vector<int> T(N); 
    int R = 0;
    for(int i = 0; i < N; i++) { 
        cin >> T[i];
    }

    for (int i = 0; i < N; i += 2) {
        R += (T[i + 1] - T[i]);
    }

    if (N % 2 != 0) { 
        cout << "still running";
    } else { 
        cout << R;
    }

    return 0;
}
