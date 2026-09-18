// LeetCode Link :   https://leetcode.com/problems/find-peak-element/description/


// 1 Approach : Brute Force
// T.C : O(n)
// S.C : O(1)



class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        int n = nums.size();

        int idx=0;
        int ans=INT_MIN;

        for(int i=0; i<n; i++){
            if(nums[i] > ans){
                ans = nums[i];
                idx = i;
            }
        }
        return idx;

    }
};