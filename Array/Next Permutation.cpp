// LeetCode Link  : https://leetcode.com/problems/next-permutation/

// 1 Approach : find the breakpoint index --> find next greater number ---> swap ---> reverse 
// T.C : O(n)
// S.C :  O(1)



class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();
        
        int idx=-1;

        for(int i=n-1; i>0; i--){
            if(nums[i-1] < nums[i]){
                idx = i-1;
                break;
            }
        }
        if(idx == -1){
            reverse(nums.begin(),nums.end());
            return;
        }

        for(int i=n-1; i>=0; i--){
            if(nums[i] > nums[idx]){
                swap(nums[idx],nums[i]);
                break;
            }
        }
        reverse(nums.begin()+idx+1,nums.end());

        
    }
};