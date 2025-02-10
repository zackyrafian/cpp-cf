#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N = 5;
    vector<vector<int>> matrix(N, vector<int>(N, 0));

    for (int i = 0; i < N; i++) {
        matrix[i][i] = 1;
    }

    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j]<< " ";
        }
        cout << endl;
    }

    return 0;
}
