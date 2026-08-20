// Leetcode Link :  https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

// 1 Approach : Traverse the original array and place positive elements at even index and negative elements at odd index
// T.C :  O(n)
// S.C :  O(n)


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> arr(n);

        int i=0;
        int j=1;

        for(int r=0; r<n ;r++){
            if(nums[r] > 0){
                arr[i] = nums[r];
                i+=2;
            }else if(nums[r] < 0){
                arr[j] = nums[r];
                j+=2;
            }
        }
        nums = arr;
        return nums;
    }

};