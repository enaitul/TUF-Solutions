class Solution {
public:

    void dfs(int node, vector<int>& vis, vector<vector<int>>& adj) {

        vis[node] = 1;

        // Check all possible neighbors
        for (int j = 0; j < adj.size(); j++) {

            // If node j is connected to node
            // and j is not visited
            if (adj[node][j] == 1 && !vis[j]) {
                dfs(j, vis, adj);
            }
        }
    }

    int numProvinces(vector<vector<int>> adj) {

        int V = adj.size();

        vector<int> vis(V, 0);

        int count = 0;

        for (int i = 0; i < V; i++) {

            if (!vis[i]) {

                // Visit the entire province
                dfs(i, vis, adj);

                // One complete DFS = one province
                count++;
            }
        }

        return count;
    }
};