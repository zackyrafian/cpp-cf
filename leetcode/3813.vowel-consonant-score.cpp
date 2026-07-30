/*
 * @lc app=leetcode id=3813 lang=cpp
 *
 * [3813] Vowel-Consonant Score
 */

// @lc code=start
class Solution {
public:
    int vowelConsonantScore(string s) {
      string vowel = "AaEeIiOoUu";
      int v = 0, r = 0; 
      for (char c: s) { 
        if (isalpha(c)) { 
          if (vowel.find(c) != string::npos) { 
            v++; 
          } else { 
            r++; 
          }
        }
      }

      if (r == 0) { 
        return 0;
      }
      return floor(v / r);
    }
};
// @lc code=end

