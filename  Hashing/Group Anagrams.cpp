// LeetCode Link : https://leetcode.com/problems/group-anagrams/description/

// 1 Approach : Hash + Sorting
// T.C : O(nk log k + nlog n)
// S.C : (O(nk)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<string> s = strs;

        vector<vector<string>> result;
        map<string , vector<string>> mp;

        for(string &str : strs) {
            sort(str.begin(), str.end());
        }

        for(int i=0; i<n; i++){
            mp[strs[i]].push_back(s[i]);
        }        
        for(auto &i : mp){
            result.push_back(i.second);
        }
        return result;
    }
};