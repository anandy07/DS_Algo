// Leetcode Link : https://leetcode.com/problems/rotate-array/description/

// 1 Approach : Keep the Last Element and shift the rest elements to K steps.
// T.C : O(n × k)
// S.C : O(1)



class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        while(k--){

            int last = nums[n-1];

            for(int i=n-1; i>0; i--){
                nums[i] = nums[i-1];
            }
            nums[0] = last;
        }

        
    }
};


// 2 Approach : Using Built in reverse function
// T.C : O(n)
// S.C : O(1)


class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        k = k%n;

        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k ,nums.end());

        
    }
};


// 3 Approach : create a temp array and directly put each element at its rotated position.
// T.C : O(n)
// S.C : O(n)



class Solution {
public:
    void rotate(vector<int>& nums, int k) {

      
        int n = nums.size();
        k = k%n;

        vector<int> temp(n);
        for(int i=0; i<n; i++){
            temp[(i+k)%n] = nums[i];
        }
        nums = temp;

        
    }
};
 