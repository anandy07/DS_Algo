// LeetCode Link : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

// 1 Approach : Binary Search
// T.C : O(log n)
// S.C : O(1)


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int n = nums.size();

        int i=0;
        int j=n-1;
        int f = -1;
        int l = -1;

        // First 
        while(i <= j){
            int mid = i +(j-i)/2;
            if(nums[mid] == target){
                f = mid;
                j = mid-1;
            }else if(nums[mid] < target){
                i = mid + 1;
            }else{
                j = mid - 1;
            }
        }
        i=0;
        j=n-1;

        // Last 
        while(i <= j){
            int mid = i +(j-i)/2;
            if(nums[mid] == target){
                l = mid;
                i = mid + 1;
            }else if(nums[mid] < target){
                i = mid + 1;
            }else{
                j = mid - 1;
            }
        }
        return {f,l};
        
    }
};