// Leetcode Link https://leetcode.com/problems/sort-colors/description/

// 1 Approach : Dutch National Flag Algorithm
// T.C : O(n)
// S.C : O(1)


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        int i=0;
        int j=n-1;
        int m=0;

        while(m <= j){
            if(nums[m] == 0){
                swap(nums[m],nums[i]);
                m++;
                i++;
            }else if(nums[m] == 1){
                m++;
            }else if(nums[m] == 2){
                swap(nums[m],nums[j]);
                j--;
            }
        }
       
    }
};


// 2 Approach : Count the frequency of 0s, 1s, 2s 
// T.C : O(n)
// S.C : O(1)


class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        int c0=0,c1=0,c2=0;
        for(int i : nums){

            if(i == 0) c0++;
            if(i == 1) c1++;
            if(i == 2) c2++;
        }
        for(int i=0; i<c0; i++){
            nums[i]=0;
        }
        for(int i=c0; i<c1+c0; i++){
            nums[i]=1;
        }
        for(int i=c0+c1; i<n; i++){
            nums[i]=2;
        }
        
    }
};
