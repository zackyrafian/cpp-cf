#include <bits/stdc++.h>
using namespace std;

void BFS(int start, vector<vector<int>>& graph, vector<bool>& visited) { 
    queue<int> q;
    q.push(start);
    visited[start] = true;
    
    while (!q.empty()) { 
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int neighbor : graph[node]) { 
            if (!visited[neighbor]) {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int nodes = 6;
    vector<vector<int>> graph(nodes);

    graph[0] = {1, 2};
    graph[1] = {0, 3, 4};
    graph[2] = {0, 4};
    graph[3] = {1, 5};
    graph[4] = {1, 2, 5};
    graph[5] = {3, 4};

    vector<bool> visited(nodes, false);

    cout << "BFS Traversal: ";
    BFS(0, graph, visited);
    cout << endl;

    return 0;
}
