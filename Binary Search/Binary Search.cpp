//LeetCode Link  :  https://leetcode.com/problems/binary-search/description/

// 1 Approach : Brute Force — Linear Search
// T.C : O(n)
// S.C : O(1)

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();

        for(int i=0; i<n; i++){
            if(nums[i] == target){
                return i;
            }
        }
        return -1;
        
    }
};

// 2 Approach : Binary Search - Two Pointer Method
// T.C : O(log n)
// S.C : O(1)


class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();

        int i=0;
        int j=n-1;

        while( i <= j){
            int mid = i+(j-i)/2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                i = mid+1;
            }else if(nums[mid] > target){
                j = mid-1;
            }
           
        }
        return -1;
        
    }
};


