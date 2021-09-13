#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
	public:
	//Function to return list containing vertices in Topological order.
	vector<int> topoSort(int V, vector<int> adj[])
	{
	    // code here
	    vector<int> in_deg(V,0);

	    for(int i=0;i<V;i++){
	        for(auto x: adj[i])
	        in_deg[x]++;
	    }
	    queue<int> q;
	    for(int i=0;i<V;i++){
	        if(in_deg[i]==0)
	        q.push(i);
	    }
	    vector<int> v;
	    while(!q.empty()){
	        int temp = q.front();
	        v.push_back(temp);
	        q.pop();

	        for(auto x: adj[temp]){
	            in_deg[x]--;
	            if(in_deg[x]==0)
	            q.push(x);
	        }
	    }

	    return v;
	}
};

// { Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }

    return 0;
}  // } Driver Code Ends
