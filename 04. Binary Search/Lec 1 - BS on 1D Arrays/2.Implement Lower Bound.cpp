
#include <vector>
using namespace std;

// Given a sorted array arr[] (with unique elements) and an integer k, find the index (0-based) of the largest element in arr[] that is less than or equal to k. 
// This element is called the "floor" of k. If such an element does not exist, return -1.

class Solution {
  public:
    int findFloor(vector<int>& arr, int k) {

        // Your code here
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end-start)/2;
        
        int result = -1;
        while(start <= end){
            if(arr[mid] == k){
                return mid;
            }else if(arr[mid] < k){
                result = mid;
                start = mid + 1;
            }else if(arr[mid] > k){
                end = mid - 1;
            }
            // new middle value, after the udpating the either start, end index value
            mid = start + (end-start)/2;
        }
        return result;
    }
};