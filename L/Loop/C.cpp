#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N = 5;
    vector<vector<int>> S(N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
             S[i].push_back(j + 1);
        }
    }

    for (int i = 0; i < N; i++)  {
        for (int j = 0; j < S[i].size(); j++) {
            cout << S[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}