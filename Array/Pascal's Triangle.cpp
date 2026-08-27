// LeetCode Link  :  https://leetcode.com/problems/pascals-triangle/description/

// 1 Approach : 
// T.C : O(n²)
// S.C : O(n²)



class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> v;
        v.push_back({1});

        int i=1;
        while(i < numRows){

            vector<int>row;
            row.push_back(1);

            for(int j=1; j<i; j++){
                row.push_back(v[i-1][j-1] + v[i-1][j]);
            }
            row.push_back(1);
            v.push_back(row);

            i++;
        }
        return v;
    }
};