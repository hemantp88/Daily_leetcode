// You are given a positive integer n representing n cities numbered from 1 to n. You are also given a 2D array roads where roads[i] = [ai, bi, distancei] indicates that there is a bidirectional road between cities ai and bi with a distance equal to distancei. The cities graph is not necessarily connected.

// The score of a path between two cities is defined as the minimum distance of a road in this path.

// Return the minimum possible score of a path between cities 1 and n.

// Note:

// A path is a sequence of roads between two cities.
// It is allowed for a path to contain the same road multiple times, and you can visit cities 1 and n multiple times along the path.
// The test cases are generated such that there is at least one path between 1 and n.



#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
      int ans = INT_MAX; 
        //create a weighted graph
        vector<vector<pair<int, int>>> g(n + 1);
        for(auto r: roads){
            g[r[0]].push_back({r[1], r[2]});
            g[r[1]].push_back({r[0], r[2]});
        }
        vector<int> vis(n+1, 0);
        queue<int> q;
        q.push(1); vis[1] = 1;    //run bfs from 1
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            for(auto i: g[node]){
                ans = min(ans, i.second);   //check for min path length
                if(vis[i.first] != 1){
                    vis[i.first] = 1;
                    q.push(i.first);
                }
            }
        }
        return ans;   
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