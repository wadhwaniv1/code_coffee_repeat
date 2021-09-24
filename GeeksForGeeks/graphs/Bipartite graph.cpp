class Solution {
public:
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> vis(V,-1);
	    for(int i=0;i<V;i++){
	        if(vis[i] == -1){
	            queue<int> q;
	            q.push(i);
	            vis[i]=0;
	            while(!q.empty()){
	                int t = q.front();
	                q.pop();
	                for(auto x:adj[t]){
	                    if(vis[x] == -1){
	                        q.push(x);
	                        vis[x]=!vis[t];
	                    }else if(vis[x] == vis[t]){
	                        return false;
	                    }
	                }
	            }
	        }
	    }
	    return true;
	}

};
