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


// 2 Approach : 
// T.C : 
// S.C : 


class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int n = piles.size();
        int i = 1;
        long long j = *max_element(piles.begin(), piles.end());
        int ans=-1;

        while( i <= j){
            long long t=0;
            int mid = i+(j-i)/2;
            for(int i=0; i<n; i++){
                t += piles[i]/mid;
                if(piles[i]%mid != 0){
                    t++;
                }
            }
            if(t <= h){
                ans =  mid;
                j = mid-1;
            }else{
                i = mid+1;
            }
            
        }
        return ans;
    }
};
