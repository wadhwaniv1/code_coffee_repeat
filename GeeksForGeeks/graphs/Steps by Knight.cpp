class Solution
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    queue<pair<int,int>> q;
	    q.push({KnightPos[0],KnightPos[1]});

	    vector<vector<int>> vis(N+1,vector<int>(N+1,0));
	    while(!q.empty()){
	        pair<int,int> node = q.front();
	        q.pop();

	        if(node.first+2<=N && node.second+1<=N && vis[node.first+2][node.second+1] == 0){
	            q.push({node.first+2,node.second+1});
	            vis[node.first+2][node.second+1] = vis[node.first][node.second]+1;
	        }
	        if(node.first+1<=N && node.second+2<=N && vis[node.first+1][node.second+2] == 0){
	            q.push({node.first+1,node.second+2});
	            vis[node.first+1][node.second+2] = vis[node.first][node.second]+1;
	        }

	        if(node.first+2<=N && node.second-1>=1 && vis[node.first+2][node.second-1] == 0){
	            q.push({node.first+2,node.second-1});
	            vis[node.first+2][node.second-1] = vis[node.first][node.second]+1;
	        }

	        if(node.first-2>=1 && node.second+1<=N && vis[node.first-2][node.second+1] == 0){
	            q.push({node.first-2,node.second+1});
	            vis[node.first-2][node.second+1] = vis[node.first][node.second]+1;
	        }

	        if(node.first-2>=1 && node.second-1>=1 && vis[node.first-2][node.second-1] == 0){
	            q.push({node.first-2,node.second-1});
	            vis[node.first-2][node.second-1] = vis[node.first][node.second]+1;
	        }

	        if(node.first-1>=1 && node.second+2<=N && vis[node.first-1][node.second+2] == 0)
	        {
	            q.push({node.first-1,node.second+2});
	            vis[node.first-1][node.second+2] = vis[node.first][node.second]+1;
	        }
	        if(node.first-1>=1 && node.second-2>=1 && vis[node.first-1][node.second-2] == 0)
	        {
	            q.push({node.first-1,node.second-2});
	            vis[node.first-1][node.second-2] = vis[node.first][node.second]+1;
	        }
	        if(node.first+1<=N && node.second-2>=1 && vis[node.first+1][node.second-2] == 0)
	        {
	            q.push({node.first+1,node.second-2});
	            vis[node.first+1][node.second-2] = vis[node.first][node.second]+1;
	        }
	    }

	    return vis[TargetPos[0]][TargetPos[1]];
	}
};
