// Given an integer array nums, return the number of subarrays filled with 0.

// A subarray is a contiguous non-empty sequence of elements within an array.

#include<bits/stdc++.h>
using namespace std;


// #define int long long
void solve()
{
 
}
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0,ans=0;
       
        for(auto x: nums )
        {
            if(x==0)
            {
                count++;
            }
            else
            {
                ans+=(count)*(count+1)/2;
                count=0;
            }
        }
         ans+=(count)*(count+1)/2;
        return ans;
    }
};

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