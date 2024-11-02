
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long int mod = 1e9 + 7;
    long long int fn(int n, vector<long long int> &dp)
    {
        if (n == 0 || n == 1)
            return n;
        if (dp[n] != -1)
            return dp[n];
        return dp[n] = ((fn(n - 1, dp)) % mod + (fn(n - 2, dp)) % mod) % mod;
    }

    long long int topDown(int n)
    {
        if (n == 0 || n == 1)
            return n;
        vector<long long int> dp(n + 1, -1);
        return fn(n, dp);
    }
};