// Summary of problem - 
// Geek wants to climb from the 0th stair to the (n-1)th stair. 
// At a time the Geek can climb either one or two steps. A height[N] array is also given. 
// Whenever the geek jumps from stair i to stair j,
// the energy consumed in the jump is abs(height[i]- height[j]),
//  where abs() means the absolute difference. return the minimum energy that can be used by the Geek to jump from stair 0 to stair N-1.
// problem link - https://www.geeksforgeeks.org/problems/geek-jump/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=geek-jump

// How do you came into here?
// Reason : Try all possible ways

// 1. Express everything in terms of indexes
// 2. Explore all possible ways 
//    f(n), there are two possible way to reached f(n-1) and f(n-2)
// 3. according to question, take min energy that can be used by the geek to jump from 0 to N-1

#include <vector>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

// solution-1 TLE
// TC - 0(2)N
// SC - 0(N)
class Solution {
  private:
    int solve(int currentIndex, vector<int> & height){
        if(currentIndex == 0) return 0;

        int left = INT_MAX;
        int right = INT_MAX;
        if(currentIndex > 0){
            left = abs(height[currentIndex] - height[currentIndex-1]) + solve(currentIndex-1,height);
        }

        if(currentIndex > 1){
            right = abs(height[currentIndex] - height[currentIndex-2]) + solve(currentIndex-2,height); 
        }
        return min(left,right);
    }
  public:
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        int currentIndex = n - 1;
        return solve(currentIndex,height);
    }
};

// solution-2 Recursion + Memory
class Solution {
  private:
    int solve(int currentIndex, vector<int> & height,vector<int> dp){
        
        if(currentIndex == 0) 
              return 0;
              
        if(dp[currentIndex] != -1){
            return dp[currentIndex];
        }
        
        // the energy consumed in the jump is abs(height[i]- height[j])
        // Do it now!
        int left = abs(height[currentIndex] - height[currentIndex-1]) + solve(currentIndex-1,height,dp);
        int right = INT_MAX;
        if(currentIndex > 1){
            right = abs(height[currentIndex] - height[currentIndex-2]) + solve(currentIndex-2,height,dp); 
        }
        return dp[currentIndex] = min(left,right);
    }
  public:
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        int currentIndex = n - 1;
        vector<int> dp(n+1,-1);
        return solve(currentIndex,height,dp);
    }
};


// solution-3 Tablution 
// TC - 0(N)
// SC - 0(N)

class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        vector<int> dp(n+1);
        dp[0] = 0;
        
        for(int index = 1; index < n; index++){
            int left = abs(height[index] - height[index-1]) + dp[index-1];
            int right = INT_MAX;
            if(index > 1) 
             right = abs(height[index] - height[index-2] ) + dp[index-2];
             
            dp[index] = min(left,right);
        }
        return dp[n-1];
    }
};

// solution-3 space optimization
// Just need privours Two value, to get current answer
// TC - 0(N)
// SC - 0(1) constant space - NO Space 

class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        
        int prev1 = 0;
        int prev2 = 0;
        int curr = 0;
        
        for(int index = 1; index < n; index++){
            int left = abs(height[index] - height[index-1]) + prev1;
            int right = INT_MAX;
            if(index > 1) 
             right = abs(height[index] - height[index-2] ) + prev2;
             
            curr = min(left,right);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};