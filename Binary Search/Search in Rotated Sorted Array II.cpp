// LeetCode  Link  : https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/

// 1 Approach : Brute Force
// T.C : O(n)
// S.C : O(1)


class Solution {
public:
    bool search(vector<int>& nums, int target) {

        int n = nums.size();

        for(int i=0; i<n; i++){
            if(nums[i] == target){
                return true;
            }
        }
        return false;
        
    }
};