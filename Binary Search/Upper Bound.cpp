/*

Given a sorted array of nums and an integer x, write a program to find the upper bound of x.

The upper bound of x is defined as the smallest index i such that nums[i] > x.

If no such index is found, return the size of the array.

*/


// 1 Approach : Binary Search
// T.C : O(log n)
// S.C : O(1)


class Solution{
public:
    int upperBound(vector<int> &nums, int x){

        int n = nums.size();
        int ans=n;
        int i=0;
        int j=n-1;

        while(i <= j){
            int mid = i+(j-i)/2;
            if(nums[mid]>x){
                ans = mid;
                j = mid-1;
            }else if(nums[mid] <= x){
                i = mid+1;
            }
        }
        return ans;
        
    }
};