// LeetCode Link : https://leetcode.com/problems/find-the-duplicate-number/description/


// 1 Approach : Brute Force — Nested Loops
// T.C : O(n²)
// S.C : O(1)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {


        map<int,int>mp;

        for(int i : nums){
            mp[i]++;
            
        }
        for(auto&i : mp){
            if(i.second > 1){
                return i.first;
            }
        }
        return -1;
    }
};
