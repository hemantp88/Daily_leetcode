// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

// Return the minimum integer k such that she can eat all the bananas within h hours.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // sort(piles.begin().piles.end());
        int left=1,right=1e9;
        while(left<right)
        {
            int hr=0;
             int mid = left + (right - left) / 2;
            for(auto x:piles)
            {
                hr+= ((x+mid-1)/mid);
            }
            if(hr<=h)
            {
                right=mid;
            }
            else
            {
                left=mid+1;
            }

        }
        return left;
    }

};


int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    
    return 0;
}