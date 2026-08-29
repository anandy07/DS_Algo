// LeetCode Link : https://leetcode.com/problems/find-the-duplicate-number/description/


// 1 Approach : Brute Force — Nested Loops
// T.C : O(n²)
// S.C : O(1)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int n = nums.size();
        int ans=0;
        for(int i=0; i<n; i++){
            int cnt=0;
            for(int j=0; j<n; j++){
                if(nums[i] == nums[j]){
                    cnt++;
                    if(cnt > 1){
                        ans = nums[i];
                        break;
                    }
                }
            }
        }
        return ans;

    }
};
