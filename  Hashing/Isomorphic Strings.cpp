// LeetCode Link  : https://leetcode.com/problems/isomorphic-strings/description/

// 1 Approach : Hash Table
// T.C : O(n)
// S.C : O(1)


class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int n = s.size();
        int m = t.size();

        if(n != m) return false;

        map<char,char>mp1;
        map<char,char>mp2;

        for(int i=0; i<n; i++){
            char a = s[i];
            char b = t[i];

            if(mp1.find(a) != mp1.end() && mp1[a] != b || mp2.find(b) != mp2.end() && mp2[b] != a){
                return false;
            }
            mp1[a] = b;
            mp2[b] = a;
        }
        return true;
    
    }
};