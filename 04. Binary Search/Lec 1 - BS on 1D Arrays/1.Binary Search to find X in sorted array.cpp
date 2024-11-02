
// Binary Search is searching Algorithm 
// Divide and conquer Appraoch 
// Given an array of integers nums which is sorted in ascending order, 
// and an integer target, write a function to search target in nums. 
// If target exists, then return its index. Otherwise, return -1.
// You must write an algorithm with O(log n) runtime complexity.


// --> Mistakes learning DSA-
// Mistake-1 Going to fast into solutions,Think how to solve problems
//    - take pen,paper, run the test cases 
//    - create the bruthforce appraoch 
//    - you need to develop mind-set, give 50 min (atleast) 
//    - if you able not solve it, then learn from the topic, solve 3 problems 

// Mistake-2 
// Master your basic,understand the basic, learn concepts,theory also.
// Relax, it'easy!

#include <bits/stdc++.h>
using namespace std;

// #solution-1 Binary search using Iteration 
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        // calculate the middle index value
        int mid = start + (end-start)/2;

        while(start <= end){
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            // udpate the middle value, need update the middle index value
            mid = start + (end-start)/2;
        }
    // If target exists, then return its index. Otherwise, return -1.
        return -1;
    }
};

// #solution-2 Binary search using Recursion 
class Solution {
private:
   int BinarySerach(int start, int end, vector<int> & nums, int target){

      // base case
       if(start >= end){
         return -1;
       }

       int mid = start + (end-start)/2;
       if(nums[mid] == target){
          return mid;
       }else if(nums[mid] < target){
         // recursive calls to right half of array 
          return BinarySerach(mid+1,end,nums,target);
       }else{
         // recursive calls to left half of array 
          return BinarySerach(start,mid-1,nums,target);
       }
   }
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        return BinarySerach(start,end,nums,target);
    }
};


