// LeetCode Link : https://leetcode.com/problems/contiguous-array/description/

// 1 Approach : 
// T.C : 
// S.C : 


class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        int n = nums.size();
        int ans = 0;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int cnt1=0;
                int cnt2=0;
                for(int k=i; k<=j; k++){
                    if(nums[k] == 0){
                        cnt1++;
                    }else if(nums[k] == 1){
                        cnt2++;
                    } 
                }
                if(cnt1 == cnt2){
                    ans = max(ans , cnt1+cnt2);
                }
            }
        }
        return ans;
        
    }
};