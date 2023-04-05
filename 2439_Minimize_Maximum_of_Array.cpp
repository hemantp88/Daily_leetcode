#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
bool f(vector<int>&nums,int mid)
{
    long long int preSum=0;
    for(int i=0;i<nums.size();i++)
    {
        preSum+=nums[i];
        if(preSum>(long)mid*(i+1))
        {
            return false;
        }
        
    }
    return true;
}
    int minimizeArrayValue(vector<int>& nums) {
        int low=nums[0];
            long long int high=INT_MIN ,ans=INT_MAX;
            for(auto x:nums)
            {
                // high = max(high,x);
                if(high<x)
                {
                    high=x;
                }
            }
            while(low<=high)
            {
                int mid = low + (high-low)/2;
                if(f(nums,mid))
                
                {
                    // ans = min(ans,mid);
                    if(ans>mid)
                    {
                        ans=mid;
                    }
                
                high=mid-1;
                }
                else low=mid+1;
            }
            return ans;
    }
};
// ceil fxn optimisation

    class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
     long long int preSum=0,res=INT_MIN,n=nums.size();
     for(int i=0;i<n;i++)
     {
         preSum+=nums[i];
         res=max(res,(preSum+i)/(i+1));
     } 
     return res;  
    }
};

int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);

    return 0;
}