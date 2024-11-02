
#include <bits/stdc++.h>
using namespace std;

class Solution {
  private:
   int findFloor(vector<int>& arr, int k) {
        // Your code here
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end-start)/2;
        
        int result = -1;
        while(start <= end){
            if(arr[mid] == k){
                return arr[mid];
            }else if(arr[mid] < k){
                start = mid + 1;
                result = arr[mid];
            }else if(arr[mid] > k){
                end = mid - 1;
            }
            // new middle value, after the udpating the either start, end index value
            mid = start + (end-start)/2;
        }
        return result;
    }
    int findCeil(vector<int>& arr, int k) {
        // Your code here
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end-start)/2;
        
        int result = -1;
        while(start <= end){
            if(arr[mid] == k){
                return arr[mid];
            }else if(arr[mid] < k){
                start = mid + 1;
            }else if(arr[mid] > k){
                result = arr[mid];
                end = mid - 1;
            }
            // new middle value, after the udpating the either start, end index value
            mid = start + (end-start)/2;
        }
        return result;
    }
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {

        // code here
        // sort the array - STL
        sort(arr.begin(),arr.end());
        int p1 = findFloor(arr,x);
        int p2 = findCeil(arr,x);
        vector<int> p;
        p.push_back(p1);
        p.push_back(p2);
        // return result array(p)
        return p;
    }
};