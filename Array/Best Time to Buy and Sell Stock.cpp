// Leetocode Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/


// 1 Approach : Brute Force
// T.C : O(n²)
// S.C :  O(1)


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


// 2 Approach : Two Pointer
// T.C : O(n)
// S.C : O(1)


class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        int i=0;
        int j=1;
        int maxi = 0;

        while( j < n){
            if((prices[j] - prices[i]) <= 0){
                i=j;
                j++;
            }else{
                maxi = max(maxi ,(prices[j] - prices[i]));
                j++;
            }
        }
        return maxi;

    }
};


// 3 Approach : find the lowest price so far and sell to the current price
// T.C : O(n)
// S.C :  O(1)


class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        int mini = INT_MAX;;
        int maxi = 0;

        for(int i=0; i<n; i++){
            mini = min(mini , prices[i]);
            maxi = max(maxi , prices[i] - mini);
        }
        return maxi;
    }
};