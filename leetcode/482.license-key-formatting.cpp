/*
 * @lc app=leetcode id=482 lang=cpp
 *
 * [482] License Key Formatting
 */

// @lc code=start
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
      string b = ""; 
      for (char f: s) { 
        if (f != '-') b += toupper(f); 
      }
      string result = ""; 
      int r = b.length() % k; 
      if (r > 0) result += b.substr(0, r); 

      for (int i = r; i < b.length(); i += k) { 
        if (!result.empty()) result += '-'; 
        result += b.substr(i, k); 
      }
      return result;
    }
};
// @lc code=end

