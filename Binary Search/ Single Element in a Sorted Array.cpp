// LeetCode Link : https://leetcode.com/problems/single-element-in-a-sorted-array/description/


// 1 Approach : Map
// T.C : O(n log n)
// S.C : O(n)


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        map<int,int>mp;
        for(int i : nums){
            mp[i]++;
        }
        for(auto&i: mp){
            if(i.second == 1){
                return i.first;
            }
        }
        return -1;

       
    }
};


// 2 Approach : Binary Search
// T.C : O(log n)
// S.C : O(1)



class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();
        int i = 0;
        int j = n - 1;

        while (i < j) {
            int mid = i+(j-i)/2;

            if(mid%2 == 0){
                if(nums[mid] == nums[mid+1]){
                    i = mid + 2;
                }else{
                    j = mid;
                }
            }else{
                if(nums[mid] == nums[mid-1]){
                    i = mid+1;
                }else{
                    j = mid;
                }
            }
        }
        return nums[i];
    }
};
