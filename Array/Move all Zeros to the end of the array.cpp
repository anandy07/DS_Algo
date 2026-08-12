//  Leetcode Link : https://leetcode.com/problems/move-zeroes/description/

// 1 Approach : Brute Force — Extra Array -> First fill all the non-zero Elements and then fill the remaining positions with Zeros.
// T.C : O(n)
// S.C :  O(n)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();

        vector<int>ans;
        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                ans.push_back(nums[i]);
            }
        }
        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                ans.push_back(nums[i]);
            }
        }
        nums = ans;
    }
};

// 2 Approach : Brute force - (In-Place)
// T.C : O(n)
// S.C : O(1)


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();
        int j=0;

        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                nums[j] = nums[i];
                j++;
            }
        }
        while(j < n){
            nums[j] = 0;
            j++;
        }

    }
};


// 3 Approach : Two Pointers — Swap
// T.C : O(n)
// S.C : O(1)


class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int n = nums.size();

        int j=0;

        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};