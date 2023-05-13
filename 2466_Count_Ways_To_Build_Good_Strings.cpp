#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        int small = min(zero, one);
        int large = max(zero, one);
        int mod = 1000000007;
        // int[] dp = new int[high+1];
      vector<int>dp(high+1,0);
        dp[small] = 1;
        if (large % small == 0) {
            dp[large] = 2;
        } else {
            dp[large] = 1;
        }
        for (int i = small; i < large; i+=small) {
            dp[i] = 1;
        }
        int total = 0;
        if (large == low) {
            total = dp[large];
        }
        for (int i = large + 1; i <= high; i++) {
            dp[i] = (dp[i-small] + dp[i-large]) % mod;
            if (i >= low) {
                total += dp[i];
                total = total % mod;
            }
        }
        return total;
    }
};
int32_t main()
{
    cin.tie(0)->sync_with_stdio(false);
    return 0;
}