#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int x:nums)
        {
            mp[x]++;
        }
        vector<int>ans;
        priority_queue<pair<int,int>>pq;
        for(auto x: mp)
        {
            pq.push({x.second,x.first});
            if(pq.size()>mp.size()-k)
            {
                ans.push_back(pq.top().second);
                pq.pop();
            }
        }
        return ans;
    }
};
int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    return 0;
}