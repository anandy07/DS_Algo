// LeetCode  Link : https://leetcode.com/problems/koko-eating-bananas/description/


// 1 Approach : Brute Force (TLE)
// T.C : 
// S.C : 


class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int n = piles.size();
        int k=1;

        while(true){
            long long t= 0;
            for(int i=0; i<n; i++){
                int num = piles[i];
                long long cnt=0;
                while(num > 0){
                    cnt += 1;
                    num = num - k;
                }
                t += cnt;
            }
            if( t <= h){
                return k;
            }
            k++;
        }
        return -1;
        
    }
};
