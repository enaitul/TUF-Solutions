class Solution{
public:
    bool dfs (int i, vector<int> adj[], vector<bool> &visited, int prev){
        visited[i] = true;
        for (auto node : adj[i]){
            if (!visited[node]){
                if (dfs(node, adj, visited, i)){
                    return true;
                }
            }
            else if (node!=prev){
                return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);

        for (int i = 0; i< V; i++){
            if (!visited[i]){
                if (dfs(i, adj, visited, -1)){
                    return true;
                }
            }
        }
        return false;
    }
};