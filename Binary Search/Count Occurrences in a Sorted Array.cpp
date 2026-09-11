/*

You are given a sorted array of integers arr and an integer target. Your task is to determine how many times target appears in arr.
Return the count of occurrences of target in the array.


*/


// 1 Approach : Binary Search
// T.C : O(log n)
// S.C : O(1)



class Solution {
public:
    int countOccurrences(vector<int>& nums, int target) {
        // Your code goes here
        int n = nums.size();

        int i=0;
        int j=n-1;
        int first=0;
        int second=0;

        while(i <= j){
            int mid = i+(j-i)/2;
            if(nums[mid] == target){
                second=mid;
                i = mid+1;
            }else if(nums[mid] < target){
                i = mid+1;
            }else{
                j = mid-1;
            }
        }
        i =0;
        j = n-1;

        while(i<=j){
            int mid = i+(j-i)/2;
            if(nums[mid] == target){
                first=mid;
                j = mid-1;
            }else if(nums[mid] < target){
                i = mid+1;
            }else{
                j = mid-1;
            }
        }
        return second-first+1;;
    }
};