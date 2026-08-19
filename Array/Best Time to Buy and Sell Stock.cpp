// Leetocode Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/


// 1 Approach : 
// T.C : 
// S.C : 


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();

        int ans=0;
        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=i; j<n; j++){
                sum = prices[j] - prices[i];
                ans = max(sum , ans);
            }
        }
        return ans;

       
    }
};