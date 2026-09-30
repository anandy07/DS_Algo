// Leetcode Link : https://leetcode.com/problems/ransom-note/description/

// 1 Approach : Hash map
// T.C : O(m + n)
// S.C : O(1)

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        map<char ,int> mp;

        for(char i : magazine){
            mp[i]++;
        }
        for(char i : ransomNote){
            if(mp[i] == 0){
                return 0;
            }
            mp[i]--;
        }
        return 1;
        
    }
};