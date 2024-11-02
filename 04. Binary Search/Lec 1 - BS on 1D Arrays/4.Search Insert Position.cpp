
#include <vector>
using namespace std;

// problem link - https://leetcode.com/problems/search-insert-position/
// description - 
// Given a sorted array of distinct integers and a target value, 
// return the index if the target is found. If not, 
// return the index where it would be if it were inserted in order.
// You must write an algorithm with O(log n) runtime complexity.

class Solution {
public:
    // searching for inserting the element ):
    int searchInsert(vector<int>& nums, int target) {
        int start = 0;
        int n = nums.size();
        int end = n - 1;
        int mid = start + (end - start);

        while(start <= end){
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] <= target){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            mid = start + (end - start);
        }
        return start;
    }
};