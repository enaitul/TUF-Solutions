class Solution {
public:
    bool bfs(int start, vector<vector<int>>& adj, vector<int>& color) {
        queue<int> q;
        q.push(start);
        color[start] = 0;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (auto it : adj[node]) {
                if (color[it] == -1) {
                    color[it] = !color[node];
                    q.push(it);
                }
                else if (color[it] == color[node]) {
                    return false;
                }
            }
        }

        return true;
    }

    bool isBipartite(int V, vector<vector<int>> edges) {
        vector<int> color(V, -1);

        // Create adjacency list
        vector<vector<int>> adj(V);

        for (auto edge : edges) {
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // Check every connected component
        for (int i = 0; i < V; i++) {
            if (color[i] == -1) {
                if (!bfs(i, adj, color)) {
                    return false;
                }
            }
        }

        return true;
    }
};