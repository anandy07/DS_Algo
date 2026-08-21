
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


// 2 Approach : 
// T.C : 
// S.C : 