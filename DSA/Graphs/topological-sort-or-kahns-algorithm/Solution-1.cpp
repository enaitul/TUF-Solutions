class Solution{
public:
    void dfs(int node, vector<int> adj[], vector<int> &vis, stack<int> &st){
        vis[node] = 1;
        for (auto it : adj[node]){
            if (vis[it] == 0){
                dfs(it, adj, vis, st);
            }
        }
        st.push(node);
    }
    vector<int> topoSort(int V, vector<int> adj[]){
        vector<int> ans;
        stack<int> st;

        vector<int> vis(V, 0);

        for (int i = 0; i< V; i++){
            if (!vis[i]){
                dfs(i, adj, vis, st);
            }
        }

        while (!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};
