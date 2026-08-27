// LeetCode Link  :  https://leetcode.com/problems/majority-element-ii/description/

// 1 Approach : Hash Map
// T.C : O(n )
// S.C : O(n)



class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i : nums){
            mp[i]++;
        }
        vector<int>v;
        for(auto&i : mp){
            if(i.second > n/3){
                v.push_back(i.first);
            }
        }
        return v;
    }
};