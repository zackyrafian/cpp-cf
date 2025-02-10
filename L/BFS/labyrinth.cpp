#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<string> grid;
vector<vector<int>> dist;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void bfs(int sx, int sy) {
    queue<pair<int, int>> q;
    q.push({sx, sy});
    dist[sx][sy] = 0;

    while (!q.empty()) { 
        auto [x, y] = q.front(); q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];

            if (nx >= 0 && nx < N && ny >= 0 && ny < M && grid[nx][ny] == '.' && dist[nx][ny] == -1) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M;
    grid.resize(N);
    dist.assign(N, vector<int>(M, -1));
    
    int sx, sy, ex, ey;
    for (int i = 0; i < N; i++) { 
        cin >> grid[i];
        for (int j = 0; i < M; j++) { 
            if (grid[i][j] == 'S') sx = i, sy = j;
            if (grid[i][j] == 'E') sx = i, sy = j;
        }
    }
    
    bfs(sx, sy); 
    
    if (dist[ex][ey] == -1) cout << "No path found\n";
    else cout << "Shortest path: " << dist[ex][ey] << "\n";

    return 0;
}