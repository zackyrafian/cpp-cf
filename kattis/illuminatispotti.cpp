#include <iostream>
#include <vector>

using namespace std;

int countTriangles(vector<vector<int>>& graph, int N) {
    int count = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                if (graph[i][j] && graph[j][k] && graph[k][i]) {
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    int N;
    cin >> N;  

    vector<vector<int>> graph(N, vector<int>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> graph[i][j];
        }
    }

    cout << countTriangles(graph, N) << endl;

    return 0;
}
