// You are given an integer n. There is an undirected graph with n nodes, numbered from 0 to n - 1. You are given a 2D integer array edges where edges[i] = [ai, bi] denotes that there exists an undirected edge connecting nodes ai and bi.

// Return the number of pairs of different nodes that are unreachable from each other.

 
 #include<bits/stdc++.h>
 using namespace std;
 class Solution {
public:
void bfs(vector<int>adj[],int &node,vector<int>&vis,int &count)
{
    
    vis[node]=1;
    count++;
    for(auto x:adj[node])
    {
        if(vis[x]==0)
        {
            bfs(adj,x,vis,count);
        }
    }
}
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int>ans;
        vector<int>adj[n];
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            
        }
        long long res=(long long)n*(n-1)/2;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++)
        {
            int count=0;
            if(vis[i]==0)
            {
                bfs(adj,i,vis,count);
                res-=(long long)(count)*(count-1)/2;
            }
       
        }
        
        // for(int i=0;i<ans.size();i++)
        // {
        //     for(int j=i+1;j<ans.size();j++)
        //     {
        //         res=res+ans[i]*ans[j];
        //     }
        // }
      
        return res;
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