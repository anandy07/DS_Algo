
// 1 Approach : 
// T.C : 
// S.C : 

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        set<int>s(nums.begin(),nums.end());
        vector<int>arr(s.begin(),s.end());
        if(arr.size() < 1) return 0;
        if(arr.size() == 1) return 1;
        int cnt=1;
        int maxi=0;
        for(int i=1; i<arr.size(); i++){
            if(arr[i-1] == arr[i]-1){
                cnt++;
            }else{
                cnt=1;
            }
            maxi = max(maxi , cnt);
        }
        return maxi;
        
    }
};


// 2 Approach : Hash Table
// T.C : O(n)
// S.C : O(n)

/* create an unordered set to store all the elements in it. then iterate through each 
elements and if there previous is not present then look for its next number consecutive number
present in the set and also increase it length count


*/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        int maxi = 0;
        for (int num : s) {
            if (s.find(num - 1) == s.end()) {
                int cnt = 1;
                while (s.find(num + 1) != s.end()) {
                    cnt++;
                    num++;
                }
                maxi = max(maxi, cnt);
            }
        }
        return maxi;
    }
};