#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
int f(vector<int>&v1,vector<int>&v2,int i,int j,vector<vector<int>>&dp){
        if(i>=v1.size() || j>=v2.size())return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int ans=0;
        if(v1[i]==v2[j]){
            ans=1+f(v1,v2,i+1,j+1,dp);
        }
        ans=max({ans,f(v1,v2,i+1,j,dp),f(v1,v2,i,j+1,dp)});
        dp[i][j]=ans;
        return ans;
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
         vector<vector<int>>dp(nums1.size(),vector<int>(nums2.size(),-1));
        return f(nums1,nums2,0,0,dp);
        
    }
};

int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    return 0;
}