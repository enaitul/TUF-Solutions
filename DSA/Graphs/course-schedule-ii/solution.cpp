class Solution {
   public:
    vector<int> toposort(int V, vector<int> adj[]) {
        vector<int> indegree(V, 0);
        for (int i = 0; i < V; i++) {
            for (auto it : adj[i]) {
                indegree[it]++;
            }
        }
        vector<int> ans;
        queue<int> q;
        for (int i = 0; i < V; i++) {
            if (indegree[i] == 0) q.push(i);
        }
        while (!q.empty()) {
            int node = q.front();
            ans.push_back(node);
            q.pop();

            for (auto it : adj[node]) {
                indegree[it]--;
                if (indegree[it] == 0) q.push(it);
            }
        }
        return ans;
    }
    vector<int> findOrder(int N, vector<vector<int>> arr) {
        vector<int> adj[N];
        for (auto it : arr){
            int u = it[0];
            int v = it[1];
            adj[v].push_back(u);
        }
        vector<int> topo = toposort(N, adj);
        if (topo.size() < N) return {};
        else return topo;

    }
};
