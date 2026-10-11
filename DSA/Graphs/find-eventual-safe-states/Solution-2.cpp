class Solution{
public:
 vector<int> toposort (int V, vector<int> adj[]){
    vector<int> indegree(V, 0);
    for (int i = 0; i<V; i++){
        for (auto it : adj[i]){
            indegree[it]++;
        }
    }
    vector<int> ans;
    queue<int> q;

    for (int i = 0; i<V; i++){
        if(indegree[i] == 0) q.push(i);
    }

    while (!q.empty()){
        int node = q.front();
        ans.push_back(node);
        q.pop();

        for(auto it: adj[node]){
            indegree[it]--;

            if(indegree[it] == 0) q.push(it);
        }
    }
    return ans;

 }
 vector<int> eventualSafeNodes(int V, vector<int> adj[]){
        vector<int> adjRev[V];

        for (int i = 0; i< V; i++){
            for (auto it: adj[i]){
                adjRev[it].push_back(i);
            }
        }
        vector<int> result = toposort(V, adjRev);
        sort(result.begin(), result.end());
        return result;
    }
};