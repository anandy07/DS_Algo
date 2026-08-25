// Leetcode Link  : https://leetcode.com/problems/subarray-sum-equals-k/

// 1 Approach : Brute Force
// T.C : O(n²)
// S.C :  O(1)


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;

        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=i; j<n; j++){
                sum += nums[j];
                if(sum == k){
                   cnt++;
                }
            }
        }
        return cnt;
        
    }
};


// 2 Approach : Hash Map
// T.C : O(n)
// S.C :  O(n)


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int n = nums.size();

        int cnt=0;
        unordered_map<int, int> mp;

        int sum=0;
        mp.insert({0,1});
        for(int i=0; i<n; i++){
            sum += nums[i];

            if(mp.find(sum - k) != mp.end()){
                cnt += mp[sum - k];
            }
            mp[sum]++;
        }
        return cnt;
    }
};