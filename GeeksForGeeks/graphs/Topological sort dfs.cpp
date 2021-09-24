class Solution
{
	public:
	//Function to return list containing vertices in Topological order.
	void solve(int V, vector<int> adj[], stack<int> &s, vector<int> &vis){
	    vis[V]=1;
	    for(auto x: adj[V]){
	        if(!vis[x])
	        solve(V,adj,s,vis);
	    }
	    s.push(V);
	}

	vector<int> topoSort(int V, vector<int> adj[])
	{
	    // code here
	    vector<int> vis(V,0);
	    vector<int> v;
	    stack<int> s;
	    for(int i=0;i<V;i++){
	        if(!vis[i])
	        solve(i,adj,s,vis);
	    }
	    while(!s.empty()){
	        v.push_back(s.top());
	        s.pop();
	    }
	    return v;
	}
};
