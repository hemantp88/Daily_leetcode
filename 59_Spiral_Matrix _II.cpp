// Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        int left=0,right=n-1;
        int top=0,bottom=n-1;
        int count=1;
        while(left<=right&&top<=bottom)
        {
            for(int i=left;i<=right;i++)
            {
                ans[top][i]=count++;
                
            }
            top++;
            for(int i=top;i<=bottom;i++)
            {
                ans[i][right]=count++;
                // count++;
            }
            right--;
            for(int i=right;i>=left;i--)
            {
                ans[bottom][i]=count++;
                // count++;
            }
            bottom--;
            for(int i=bottom;i>=top;i--)
            {
                ans[i][left]=count++;
                // count++;
            }
            left++;
        }
        return ans;

    }
};
int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    return 0;
}