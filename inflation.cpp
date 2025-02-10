#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N;

    vector<double> T(N);
    double F;
    for (int i = 0; i < N; i++) { 
        cin >> T[i];
    }
    sort(T.begin(), T.end());
    double minF = 1.0; 

    for (int i = 0; i < T.size(); i++) {
        int F = i + 1;
     
        minF = min(minF, (double)T[i] / F);
    }

    if (minF == 1) { 
        cout << "impossible" << endl;
    } else { 
        cout << minF << endl;
    }
    return 0;
}