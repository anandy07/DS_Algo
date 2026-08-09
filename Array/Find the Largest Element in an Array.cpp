// 1 Approach : Using sort()
// T.C : O(n log n)
// S.C : O(1)

class Solution {
public:
    int largestElement(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int n = nums.size();
        return nums[n-1];

    }
};



// 2 Approach : Linear Scan
// T.C : O(n)
// S.C : O(1)

class Solution {
public:
    int largestElement(vector<int>& nums) {

        int n = nums.size();
        int largest = nums[0];
        for(int i=1; i<n; i++){
            if(nums[i] > largest){
                largest = nums[i];
            }
        }
        return largest;

    }
};

