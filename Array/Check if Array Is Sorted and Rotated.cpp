// Leetcode Link :   https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/  

// 1 Approach : sort the array, then keep rotating it and check whether it becomes the original array.
// T.C : O(n log n + n²) = O(n²)
// S.C : O(n)

class Solution {
public:
    bool check(vector<int>& nums) {

        vector<int> arr = nums;
        int n = nums.size();

        sort(arr.begin(),arr.end());
        int j=0;

        while(j<n){

            int first = arr[0];
            for(int i=1; i<n; i++){
                arr[i-1] = arr[i];
            }
            arr[n-1] = first;
            if(arr == nums){
                return true;
            }
            j++;
        }
        return false;

        
    }
};