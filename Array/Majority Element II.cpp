// LeetCode Link  :  https://leetcode.com/problems/majority-element-ii/description/

// 1 Approach : Hash Map
// T.C : O(n)
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




// 2 Approach : Boyer-Moore Voting Algorithm
// T.C : O(n)
// S.C : O(1)


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();

        int num1 = NULL;
        int cnt1=0;

        int num2 = NULL;
        int cnt2=0;

        for(int i=0; i<n; i++){
            if(nums[i] == num1){
                cnt1++;
            }else if(nums[i] == num2){
                cnt2++;
            }else if(cnt1 == 0){
                num1 = nums[i];
                cnt1=1;
            }else if(cnt2 == 0){
                num2 = nums[i];
                cnt2=1;
            }else{
                cnt1--;
                cnt2--;
            }
        }

        vector<int>v;
        int f1=0;
        int f2=0;
        for(int i=0; i<n; i++){
            if(num1 == nums[i]){
                f1++;
            }else if(num2 == nums[i]){
                f2++;
            }
            
        }
        if(f1 > n/3){
            v.push_back(num1);
        }else if(f2 > n/3){
            v.push_back(num2);
        }
        return v;
    }
};