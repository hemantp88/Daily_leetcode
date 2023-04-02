// You are given two positive integer arrays spells and potions, of length n and m respectively, where spells[i] represents the strength of the ith spell and potions[j] represents the strength of the jth potion.

// You are also given an integer success. A spell and potion pair is considered successful if the product of their strengths is at least success.

// Return an integer array pairs of length n where pairs[i] is the number of potions that will form a successful pair with the ith spell.


#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
// int search(int x,vector<int>& potions,int success)
// {
    
//     return high;
// }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        vector<int>ans;
        sort(potions.begin(),potions.end());
        int n=potions.size();
            for(auto x: spells)
            {
                // long long int index=search(x,potions,success);
             int low=0;int high=potions.size()-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if((long long int)potions[mid]*(long long int)x>=(long long int)success) high=mid-1;
      
        else
        {
            low=mid+1;
        }
        
    }
                    ans.push_back(n-1-high);
                
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