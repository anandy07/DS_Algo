// Leetcode Link  https://leetcode.com/problems/majority-element/description/

// 1 Approach : Brute Force — Nested Loops
// T.C : O(n²)
// S.C : O(1)


class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();

        for(int i=0; i<n; i++){
            int cnt=1;
            for(int j=i+1; j<n; j++){

                if(nums[i] == nums[j]){
                    cnt++;
                }
            }
            if(cnt > n/2){
                return nums[i];
            }
        }
        return -1;
        
    }
};


// 2 Approach : use map
// T.C : O(n log n)
// S.C : O(n)



class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();

        map<int,int>mp;
        for(int i : nums){
            mp[i]++;
        }
        for(auto&i : mp){
            if(i.second > n/2){
                return i.first;
            }
        }
        return -1;

        
    }
};


// 2 Approach : ****Imp :  Boyer-Moore Voting Algorithm
// T.C : O(n)
// S.C : O(1)




class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n = nums.size();

        int num=nums[0];
        int cnt=1;

        for(int i=1; i<n; i++){
            if(cnt == 0){
                num = nums[i];
                cnt=1;
            }else if(nums[i] == num){
                cnt++;
            }else{
                cnt--;
            }

        }
        int c=0;
        for(int i : nums){
            if( i == num){
                c++;
            }
        }
        if(c > n/2){
            return num;
        }
        return -1;
        
    }
};