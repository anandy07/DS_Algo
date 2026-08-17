// Leetocode Link : https://leetcode.com/problems/maximum-subarray/description/

// 1 Approach : Brute Force — 2 Loops 
// T.C :  O(n²)
// S.C :  O(1)


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();

        int ans=INT_MIN;;

        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=i; j<n; j++){
                sum += nums[j];
                ans = max(sum , ans);
                
            }
        }
        return ans;
    }
};


// 2 Approach : Kadane's Algorithm
// T.C : O(n)
// S.C : O(1)


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();

        int sum=0;
        int ans = INT_MIN;
        for(int i=0; i<n; i++){
            sum += nums[i];
            ans = max(sum,ans);
            if(sum < 0){
                sum = 0;
            }
            
        }
        return ans;


    }
};



