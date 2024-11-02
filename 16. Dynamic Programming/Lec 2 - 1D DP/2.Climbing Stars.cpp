
#include <bits/stdc++.h>
using namespace std;

// solution-1 TLE
class Solution {
public:
    int climbStairs(int n) {
        if(n <=1 ){
            return 1;
        }
        int jumpOneSteps = climbStairs(n-1);
        int jumpSecondSteps = climbStairs(n-2);
        // how many distinct ways can you climb to the top?
        // total number of ways (need to sum-up all calls)
        return jumpOneSteps + jumpSecondSteps;
    }
};

// solution-2 Memorization

