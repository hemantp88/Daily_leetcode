#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
void dfs(int r,int c,int m,int n,vector<vector<int>>&grid)
{
    if(r >= 0 && r <= grid.size() - 1 && c >= 0 && c <= grid[r].size()- 1 && grid[r][c] == 1) {
            grid[r][c] = 0;
        dfs(r-1,c,m,n,grid);
        dfs(r+1,c,m,n,grid);
        dfs(r,c-1,m,n,grid);
        dfs(r,c+1,m,n,grid);
    }     
}
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
            if(i == 0 || j == 0 || i == grid.size()- 1 || j == grid[i].size() - 1)
                    dfs(i,j,m,n,grid);


            }
        }
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                   count++;

                }

            }
        }
        return count;
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