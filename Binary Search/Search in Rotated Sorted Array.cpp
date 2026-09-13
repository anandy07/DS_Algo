// LeetCode Link  : https://leetcode.com/problems/search-in-rotated-sorted-array/description/


// 1 Approach : Brute Force
// T.C : O(n)
// S.C : O(1)

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


// 2 Approach : map
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


// 3 Approach : Binary Search
// T.C : O(log n)
// S.C : O(1)


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        int i=0;
        int j=n-1;

        while( i<=j){
            int mid = i+(j-i)/2;
            
            if(nums[mid] == target){
                return mid;
            }
            // Left Sorted
            if(nums[i] <= nums[mid]){
                if(nums[i] <= target && nums[mid] >= target){
                    j = mid-1;
                }else{
                    i = mid +1;
                }
            // Right Sorted
            }else{
                if(nums[mid] <= target && nums[j] >= target){
                    i = mid+1;
                }else{
                    j = mid-1;
                }
            }
        }
        return -1;

    }
};
