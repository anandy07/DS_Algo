// LeetCode Link  : https://leetcode.com/problems/search-in-rotated-sorted-array/description/


// 1 Approach : 
// T.C : 
// S.C : 

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        int ans=-1;
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                ans = i;
            }
        }
        return ans;
    
    }
};


// 2 Approach : 
// T.C : 
// S.C : 


class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();

        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]] = i;
        }
        if (mp.find(target) == mp.end()) {
            return -1;
        }
        return mp[target];
    }
};