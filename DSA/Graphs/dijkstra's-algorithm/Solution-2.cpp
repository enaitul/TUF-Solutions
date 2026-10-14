class Solution{
public:
    vector<int> dijkstra(int V, vector<vector<int>> edges, int S) {
        vector<vector<vector<int>>> adj(V);
        for (auto &e : edges){
            int u = e[0];
            int v = e[1];
            int wt = e[2];

            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt});
        }

        set<pair<int, int>> st;

        vector<int> dist (V, 1e9);

        dist[S] = 0;

        st.insert ({0, S});

        while (!st.empty()){
            int dis = st.begin()->first;

            int node = st.begin()->second;
            st.erase(st.begin());

            for (auto it : adj[node]){
                int adjNode = it[0];
                int edgeWt = it[1];
                //if the tentative distance to reach adjacent node is smaller than the known distance
                if (dis + edgeWt < dist[adjNode]){

                    //if another longer known distance is found, erase it from the set
                    if (dist[adjNode] != 1e9){
                        st.erase({dist[adjNode], adjNode});
                    }

                    dist[adjNode] = dis + edgeWt;

                    st.insert({dist[adjNode], adjNode});
                }
            }
        }
        return dist;
    }
};