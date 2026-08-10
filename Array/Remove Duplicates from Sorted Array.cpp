// Leetcode Link :   https://leetcode.com/problems/remove-duplicates-from-sorted-array/

// 1 Approach : Copy Unique Elements to Another Array
// T.C : O(n)
// S.C : O(n)


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> v;
        v.push_back(nums[0]);

        for(int i=1; i<n; i++){
            if(nums[i] != nums[i-1]){
                v.push_back(nums[i]);
            }
        }
        nums = v;
        return nums.size();
       
    }
};


// 2 Approach : Two Pointers -> j finds the unique Elements  and i place them in the front.
// T.C : O(n)
// S.C : O(1)


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();

        int i=0;
        int j=1;

        while(j<n){

            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
            j++;
        }
        return i+1;
       
    }
};

/*     [1, 1, 2, 2, 3]
        ↑  ↑
        i  j                 
        
        nums = [1, 1, 2, 2, 3]

        i = 0, j = 1

        j = 1 → nums[1] == nums[0] → 1 == 1 → skip

        j = 2 → nums[2] != nums[0] → 2 != 1
      → i = 1
      → nums[1] = 2

        nums = [1, 2, 2, 2, 3]

        j = 3 → nums[3] == nums[1] → 2 == 2 → skip

        j = 4 → nums[4] != nums[1] → 3 != 2
      → i = 2
      → nums[2] = 3

        nums = [1, 2, 3, 2, 3]

        return i + 1
      = 3

        
         */