#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N = 3, M = 4;
    vector<vector<int>> matrix(N, vector<int>(M));
    int num = 1;

    for (int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) { 
            matrix[i][j] = num++;
        }
    }

    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < M; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}