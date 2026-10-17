// Leetcode Link  : https://leetcode.com/problems/find-all-anagrams-in-a-string/description/

// 1 Approach : 
// T.C : O(nmlog m)
// S.C : O(m)

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        int n = s.size();
        int m = p.size();
        vector<int> ans;

        map<char, int>mp2;
        for(int i=0; i<m; i++){
            mp2[p[i]]++;
        }

        for (int i = 0; i <=n - m; i++) {
            string str = "";
            map<char, int> mp1;
            for (int j = i; j < i + m; j++) {
                mp1[s[j]]++;
            }
            if(mp1 == mp2){
                ans.push_back(i);

            }
        }
        return ans;
    }
};