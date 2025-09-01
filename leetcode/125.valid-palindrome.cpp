/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
  bool isPalindrome(string s) {
    int l = 0, r = s.length() - 1;

    while (l < r) {
      if (!isalnum(s[l])) {
        l++;
      } else if (!isalnum(s[r])) {
        r--;
      } else {
        if (tolower(s[l]) != tolower(s[r])) {
          return false;
        }
        l++;
        r--;
      }
    }
    return true;
  }
};
// @lc code=end
