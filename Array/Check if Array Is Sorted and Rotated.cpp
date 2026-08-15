// Leetcode Link :   https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/  

// 1 Approach : sort the array, then keep rotating it and check whether it becomes the original array.
// T.C : O(n log n + n²) = O(n²)
// S.C : O(n)

class Solution {
public:
    bool check(vector<int>& nums) {

        vector<int> arr = nums;
        int n = nums.size();

        sort(arr.begin(),arr.end());
        int j=0;

        while(j<n){

            int first = arr[0];
            for(int i=1; i<n; i++){
                arr[i-1] = arr[i];
            }
            arr[n-1] = first;
            if(arr == nums){
                return true;
            }
            j++;
        }
        return false;

        
    }
};


// 2 Approach : Create a Copy of array  and check all the possible circular rotations of original array against sorted array.  
// T.C : O(n²)
// S.C : O(n)


class Solution {
public:
    bool check(vector<int>& nums) {

        int n = nums.size();
        vector<int> arr = nums;
        sort(arr.begin(),arr.end());

        for(int x=0; x<=n; x++){
            bool ans = true;
            for(int i=0; i<n; i++){
                if(arr[i] != nums[(i+x)%n]){
                    ans = false;
                    break;
                }
            }
            if(ans) return true;

        }
        return false;

    }
};



// 3 Approach : Count the peak element  
// T.C : O(n)
// S.C : O(1)


class Solution {
public:
    bool check(vector<int>& nums) {

        int n = nums.size();
        int cnt=0;

        for(int i=0; i<n; i++){
            if(nums[i] > nums[(i+1)%n]){
                cnt++;
            }
        }
        if(cnt > 1 ) return false;
        return true;

    }
};