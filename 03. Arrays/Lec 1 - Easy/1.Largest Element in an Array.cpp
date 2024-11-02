
// Given an array arr[]. 
// The task is to find the largest element and return it.
#include <vector>
using namespace std;

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largestElement = arr[0];
        for(int i = 1; i<arr.size(); i++){
            largestElement = max(arr[i],largestElement);
        }
        return largestElement;
    }
};