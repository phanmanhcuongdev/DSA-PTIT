#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Graph {
private:
    int n; // số đỉnh
    vector<vector<int>> adj;
    vector<bool> visited;
    vector<int> parent;
    bool found;

public:
    Graph(int n) : n(n) {
        adj.resize(n + 1);
        visited.resize(n + 1, false);
        parent.resize(n + 1, -1);
        found = false;
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }

    void reset() {
        for (int i = 1; i <= n; ++i) {
            adj[i].clear();
            visited[i] = false;
            parent[i] = -1;
        }
        found = false;
    }

    void dfs(int u, int end) {
        if (found) return;
        visited[u] = true;
        if (u == end) {
            found = true;
            return;
        }
        for (int v : adj[u]) {
            if (!visited[v]) {
                parent[v] = u;
                dfs(v, end);
            }
        }
    }

    void findPath(int start, int end) {
        fill(visited.begin(), visited.end(), false);
        fill(parent.begin(), parent.end(), -1);
        found = false;

        dfs(start, end);

        if (!found) {
            cout << "-1\n";
        } else {
            vector<int> path;
            for (int v = end; v != -1; v = parent[v])
                path.push_back(v);
            reverse(path.begin(), path.end());
            for (int v : path) cout << v << " ";
            cout << "\n";
        }
    }
};

void solve() {
    int n, k, start, end;
    cin >> n >> k >> start >> end;

    Graph g(n);

    for (int i = 0; i < k; ++i) {
        int u, v; cin >> u >> v;
        g.addEdge(u, v);
    }

    g.findPath(start, end);
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
