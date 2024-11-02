
#include <bits/stdc++.h>
using namespace std;

class Solution {
  private:
    int firstOccurrence(vector<int> nums,int target){
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        
        // calculate the middle index value
        int mid = start + (end-start)/2;
        int result = -1;
        while(start <= end){
            if(nums[mid] == target){
                result = mid;
                end = mid - 1;
            }else if(nums[mid] < target){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            // udpate the middle value, need update the middle index value
            mid = start + (end-start)/2;
        }
    // If target exists, then return its index. Otherwise, return -1.
        return result;
    }
    int lastOccurrence(vector<int> nums,int target){
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        
        // calculate the middle index value
        int mid = start + (end-start)/2;
        int result = -1;
        while(start <= end){
            if(nums[mid] == target){
                result = mid;
                start = mid + 1;
            }else if(nums[mid] < target){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
            // udpate the middle value, need update the middle index value
            mid = start + (end-start)/2;
        }
    // If target exists, then return its index. Otherwise, return -1.
        return result;
    }
  public:
    vector<int> find(vector<int> arr, int x) {
        // code here
        int p1 = firstOccurrence(arr,x);
        int p2 = lastOccurrence(arr,x);
        // return {first,last}
        return {p1,p2};
    }
};