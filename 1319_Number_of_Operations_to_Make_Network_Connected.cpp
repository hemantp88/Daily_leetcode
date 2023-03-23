// There are n computers numbered from 0 to n - 1 connected by ethernet cables connections forming a network where connections[i] = [ai, bi] represents a connection between computers ai and bi. Any computer can reach any other computer directly or indirectly through the network.

// You are given an initial computer network connections. You can extract certain cables between two directly connected computers, and place them between any pair of disconnected computers to make them directly connected.

// Return the minimum number of times you need to do this in order to make all the computers connected. If it is not possible, return -1.

 #include<bits/stdc++.h>
 using namespace std;
 
 class Solution {
public:
void dfs(vector<int>adj[],int &node,int &n,vector<int>&vis)
{
    vis[node]=1;
    for(auto x:adj[node])
    {
        if(vis[x]==0)
        {
            dfs(adj,x,n,vis);
        }
    }
}
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<int>adj[n];
        int no=connections.size();
        for(int i=0;i<no;i++)
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        vector<int>vis(n,0);
        int count= 0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                count++;
                dfs(adj,i,n,vis);
                
                
            }
        }
        if(count==1)return 0;
        else if(no>=n-1)
        return count-1;
      return -1;
    }
};
 // #define int long long
 void solve()
 {
  
 }
 
 int32_t main()
 {
     cin.tie(0)->sync_with_stdio(false);
     int t=1;
     cin>>t;
     while(t--)
     {
         solve();
     }
     return 0;
 }