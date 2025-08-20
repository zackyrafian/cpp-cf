/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if (strs.empty()) return "";

        string p = strs[0];
        for (int i = 0; i < strs.size(); i++) { 
            while (strs[i].find(p) != 0) {
                p.pop_back();
                if (p.empty()) return "";
            }
        }

        return p;
    }
};
// @lc code=end

