/*
 * @lc app=leetcode id=3136 lang=cpp
 *
 * [3136] Valid Word
 */

// @lc code=start
class Solution {
public:
    bool isValid(string word) {
      int n = word.length(); 
      if (n < 3) return false; 
      int v = 0, co = 0;
      string vowel = "aeiouAEIOU"; 
      for (char c : word) { 
        if (isalpha(c)) { 
          if (vowel.find(c) != string::npos) { 
            v++; 
          } else { 
            co++;
          }
        } else if (!isdigit(c)) { 
          return false;
        }
      }
      return v >= 1 && co >= 1;
    }
};
// @lc code=end

