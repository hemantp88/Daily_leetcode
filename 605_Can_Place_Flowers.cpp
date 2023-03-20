// You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.

// Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule.
#include<bits/stdc++.h>
using namespace std;


// #define int long long
void solve()
{
 
}
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
      int count=0;
        for(int i=0;i<flowerbed.size() && count<n ;i++)
        {
          if(flowerbed[i]==0)
          {
              // int prev=0;
              // int next=0;
              // if(i>0)
              // {
              //     prev=flowerbed[i-1];
              // }
              // if(i<n-1)
              // {
              //     next = flowerbed[i+1];
              // }
             
             int next = (i == flowerbed.size() - 1) ? 0 : flowerbed[i + 1]; 
               int prev = (i == 0) ? 0 : flowerbed[i - 1];
              if(next==0 && prev==0)
              {
                  flowerbed[i]=1;
                count++;
              }

          }
          
        }
        return count==n;
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