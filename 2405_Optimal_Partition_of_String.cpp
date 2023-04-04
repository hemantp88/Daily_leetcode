#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int partitionString(string s) {
        int n = s.size();
         int count=1;
        for(int i=0 ; i<n ; i++)
        {
            unordered_set<char>st;
            for(int j=i;j<n;j++)
            {
                if(st.find(s[j])!=st.end())
                {
                    count++;
                    i=j-1;
                    break;
                    
                }
                else
                {
                    st.insert(s[j]);
                }
            }
          
        }
          return count;
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