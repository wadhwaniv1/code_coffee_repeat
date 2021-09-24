class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                queue<pair<int,int>> q;
                q.push({i,-1});
                vis[i]=1;

                while(!q.empty()){
                    pair<int,int> p = q.front();
                    q.pop();

                    for(auto it: adj[p.first]){
                        if(vis[it] && p.second != it)
                        return true;
                        else if(! vis[it])
                        {
                            q.push({it,p.first});
                            vis[it]=1;
                        }
                    }
                }
            }
        }
        return false;
    }
};
