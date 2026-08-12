// Leetcode Link https://leetcode.com/problems/two-sum/description/

// 1 Approach : Brute Force — Nested Loops
// T.C : O(n²)
// S.C : O(1)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};

    }
};


/** 2 Approach : create a vector pair two store the elements and their index,then sort them 
                 on the bases of the elements then use two pointer to find the target indexes **/
// T.C : O(n log n)
// S.C : O(n)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        vector<pair<int,int>> arr;

        for(int i=0; i<n; i++){
            arr.push_back({nums[i] , i});
        }
        sort(arr.begin(),arr.end());
        int i=0;
        int j=n-1;

        while(i < j){
            int sum = arr[i].first + arr[j].first;
            if(sum == target){
                return {arr[i].second, arr[j].second};
            }else if(sum > target){
                j--;
            }else if(sum < target){
                i++;
            }
        }
        return{};

    }
};


// 3 Approach : Hash Table
// T.C : 
// S.C : 