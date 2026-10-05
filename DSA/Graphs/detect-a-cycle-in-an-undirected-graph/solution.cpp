class Solution{
public:
    bool bfs (int i, vector<int> adj[], vector<bool> &visited){
        queue<pair<int, int>> q;
        q.push({i, -1});
        visited[i] = true;

        while (!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();

            for (auto it: adj[node]){
                if (!visited[it]) {
                    visited[it] = true;
                    q.push({it, node});
                }
                else if (it != parent) return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);
        bool ans = false;

        for (int i = 0; i< V; i++){
            if (!visited[i]){
                ans = bfs(i, adj, visited);

                if (ans) break;
            }
        }
        return ans;
    }
};