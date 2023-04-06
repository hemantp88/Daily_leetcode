// problem_link: https://leetcode.com/problems/number-of-closed-islands/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
bool dfs(vector<vector<int>>&grid,int row, int col,int &n,int &m)
    {
        if(row<0 || col<0 || row>=n || col>=m)
        {
            return false;
        }
        if(grid[row][col]==1)return true;
        grid[row][col]=1;
        bool d1 = dfs(grid, row+1, col,n,m);
        bool d2 = dfs(grid, row, col+1,n,m);
        bool d3 = dfs(grid, row-1, col,n,m);
        bool d4 = dfs(grid, row, col-1,n,m);
        return d1 && d2 && d3 && d4;
        // return false;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int res=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                {
                    if(dfs(grid,i,j,n,m)==true)res++;
                    
                }
            }
        }
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