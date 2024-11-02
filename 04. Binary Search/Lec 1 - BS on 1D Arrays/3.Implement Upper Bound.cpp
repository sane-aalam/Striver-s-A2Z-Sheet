
#include <vector>
using namespace std;

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
                start = mid + 1;
            }else if(arr[mid] > k){
                result = mid;
                end = mid - 1;
            }
            // new middle value, after the udpating the either start, end index value
            mid = start + (end-start)/2;
        }
        return result;
    }
};