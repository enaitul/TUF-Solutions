#define P pair<int, int>
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

        priority_queue <P, vector<P>, greater<P>> pq;

        vector<int> dist(V, 1e9);

        dist[S] = 0;

        pq.push({0,S});

        while (!pq.empty()){
            int dis = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            for(auto it : adj[node]){
                int adjNode = it[0]; //node
                int edgeWt = it[1]; //edge Weight

                if (dis + edgeWt < dist[adjNode]){
                    dist[adjNode] = dis + edgeWt;

                    pq.push({dist[adjNode], adjNode});
                }

            }
        }
        return dist;
    }
};