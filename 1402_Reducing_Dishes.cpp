// A chef has collected data on the satisfaction level of his n dishes. Chef can cook any dish in 1 unit of time.

// Like-time coefficient of a dish is defined as the time taken to cook that dish including previous dishes multiplied by its satisfaction level i.e. time[i] * satisfaction[i].

// Return the maximum sum of like-time coefficient that the chef can obtain after dishes preparation.

// Dishes can be prepared in any order and the chef can discard some dishes to get this maximum value.

 
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxSatisfaction(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        int sum=0;
        int ans=0;
        int p=0;
        for(int i=0;i<arr.size();i++)
        {
            sum= sum+arr[i];
            p+= sum;
            if(ans>p)
            {
                break;
            }
            ans=max(p,ans);

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