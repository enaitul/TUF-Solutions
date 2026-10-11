class Solution {
   public:
    bool dfsCheck(int node, vector<int> adj[], vector<int> &vis, vector<int> &pathvis, vector<int> &check) {
        vis[node] = 1;
        pathvis[node] = 1;
        check[node] = 0;

        for (auto it : adj[node]){
            if (!vis[it]){
                if (dfsCheck(it, adj, vis, pathvis, check)){
                    return true;
                }
            }

            else if (pathvis[it]){
                return true;
            }
        }
        check[node] = 1;
        pathvis[node] = 0;
        return false;
    }

    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        vector<int> vis(V, false);
        vector<int> pathvis(V, false);
        vector<int> check(V, false);

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfsCheck(i, adj, vis, pathvis, check);
            }
        }

        vector<int> ans;

        for (int i = 0; i < V; i++) {
            if (check[i] == 1) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};