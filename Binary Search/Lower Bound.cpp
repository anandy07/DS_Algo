/* 
Given a sorted array of nums and an integer x, write a program to find the lower bound of x.

The lower bound algorithm finds the first and smallest index in a sorted array where 
the value at that index is greater than or equal to a given key i.e. x.

If no such index is found, return the size of the array.

 */


// 1 Approach : Binary Search
// T.C : O(log n)
// S.C : O(1)



class Solution {
public:
    int lowerBound(vector<int> &nums, int x) {
        int n = nums.size();

        int i = 0;
        int j = n - 1;
        int ans = n;

        while (i <= j) {
            int mid = i + (j - i) / 2;

            if (nums[mid] >= x) {
                ans = mid;
                j = mid - 1;  
            } 
            else if(nums[mid] < x) {
                i = mid + 1;
            }
        }

        return ans;
    }
};