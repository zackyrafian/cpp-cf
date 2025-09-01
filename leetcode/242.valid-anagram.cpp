/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
  bool isAnagram(string s, string t) {
    if (s.size() != t.size())
      return false;
    unordered_map<char, int> freqS, freqT;

    for (char c : s) {
      freqS[c]++;
    }

    for (char c : t) {
      freqT[c]++;
    }

    if (freqS == freqT) {
      return true;
    } else {
      return false;
    }
  }
};
// @lc code=end
