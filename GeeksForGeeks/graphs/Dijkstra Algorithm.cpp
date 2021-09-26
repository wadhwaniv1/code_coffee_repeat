class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> dis(V,INT_MAX);
        dis[S]=0;
        pq.push({0,S});

        while(!pq.empty()){
            int dist = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            for(auto it: adj[node]){
                int next = it[0];
                int nextDis = it[1];

                if(dis[next] > dis[node]+nextDis){
                    dis[next] = dis[node]+nextDis;
                    pq.push({dis[next], next});
                }
            }
        }
        return dis;
    }
};
