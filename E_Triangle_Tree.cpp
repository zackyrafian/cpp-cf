#include <bits/stdc++.h>
using namespace std;

const int MAXN = 3e5 + 5;
vector<int> adj[MAXN];
vector<int> depth;
vector<vector<int>> parent;

void dfs(int v, int p, int d) {
    depth[v] = d;
    parent[v][0] = p;
    for(int u : adj[v]) {
        if(u != p) {
            dfs(u, v, d + 1);
        }
    }
}

int get_lca(int u, int v, int logn) {
    if(depth[u] < depth[v]) swap(u, v);
    
    for(int i = logn; i >= 0; i--) {
        if(depth[u] - (1 << i) >= depth[v]) {
            u = parent[u][i];
        }
    }
    
    if(u == v) return u;
    
    for(int i = logn; i >= 0; i--) {
        if(parent[u][i] != parent[v][i]) {
            u = parent[u][i];
            v = parent[v][i];
        }
    }
    return parent[u][0];
}

int count_triangles(int a, int b) {
    int count = 0;
    for(int x = 1; x <= a + b - 1; x++) {
        if(a + b > x && a + x > b && b + x > a) {
            count++;
        }
    }
    return count;
}

void solve() {
    int n;
    cin >> n;
    
    
    for(int i = 1; i <= n; i++) {
        adj[i].clear();
    }
    
    
    for(int i = 0; i < n-1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    
    int logn = ceil(log2(n)) + 1;
    depth.assign(n + 1, 0);
    parent.assign(n + 1, vector<int>(logn + 1, 0));
    
    
    dfs(1, 0, 0);
    
    
    for(int j = 1; j <= logn; j++) {
        for(int i = 1; i <= n; i++) {
            if(parent[i][j-1] != 0) {
                parent[i][j] = parent[parent[i][j-1]][j-1];
            }
        }
    }
    
    long long ans = 0;
    for(int i = 1; i < n; i++) {
        for(int j = i + 1; j <= n; j++) {
            int lca = get_lca(i, j, logn);
            
            
            bool is_ancestor_i = (lca == i);
            bool is_ancestor_j = (lca == j);
            
            if(!is_ancestor_i && !is_ancestor_j) {
                int dist1 = depth[i] - depth[lca];
                int dist2 = depth[j] - depth[lca];
                ans += count_triangles(dist1, dist2);
            }
        }
    }
    
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}