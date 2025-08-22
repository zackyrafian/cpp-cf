/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
class Solution {
public:
  int strStr(string haystack, string needle) {
    int r = 0;

    for (int i = 0; i <= (int)haystack.length() - (int)needle.length(); i++) {
      bool cocok = true;

      for (int j = 0; j < needle.length(); j++) {
        if (haystack[i + j] != needle[j]) {
          cocok = false;
          break;
        }
      }

      if (cocok) {
        return i;
      }
    }

    return -1;
  }
};
// @lc code=end
