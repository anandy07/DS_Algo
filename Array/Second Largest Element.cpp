// 1 Approach : Using sort()
// T.C : O(n log n)
// S.C : O(1)

 
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {

        int n = nums.size();

        sort(nums.begin(), nums.end());

        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[n - 1]) {
                return nums[i];
            }
        }

        return -1;
    }
};


// 2 Approach : Two-Pass Approach => First find the Largest number then find the largest number smaller then it.
// T.C : O(n) + O(n) = O(n)
// S.C : O(1)

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int n = nums.size();
        int largest = nums[0];

        for(int i=1; i<n; i++){
            if(nums[i] > largest){
                largest = nums[i];
            }
        }

        int secondLargest = INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i] > secondLargest && nums[i] != largest){
                secondLargest = nums[i];
                
            }
        }
        if(secondLargest == INT_MIN){
            return -1;
        }
        return secondLargest;
    }
};
 