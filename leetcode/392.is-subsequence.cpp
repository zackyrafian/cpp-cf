/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */

// @lc code=start
#include <algorithm>
class Solution {
public:
  bool isSubsequence(string s, string t) {
    vector<vector<int>> pos(26);

    for (int i = 0; i < t.size(); i++) {
      pos[t[i] - 'a'].push_back(i);
    }

    int prev = -1;

    for (char c : s) {
      auto &vec = pos[c - 'a'];
      if (vec.empty())
        return false;

      auto it = upper_bound(vec.begin(), vec.end(), prev);
      if (it == vec.end())
        return false;
      prev = *it;
    }

    return true;
  }
};
// @lc code=end
