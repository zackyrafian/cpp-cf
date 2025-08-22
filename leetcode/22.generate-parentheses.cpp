/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
public:
  vector<string> generateParenthesis(int n) {
    vector<string> result;
    string current;
    backtrack(0, 0, n, current, result);
    return result;
  }

private:
  void backtrack(int O, int C, int n, string &current, vector<string> &result) {
    if ((int)current.size() == 2 * n) {
      result.push_back(current);
      return;
    }
    if (O < n) {
      current.push_back('(');
      backtrack(O + 1, C, n, current, result);
      current.pop_back();
    }

    if (C < O) {
      current.push_back(')');
      backtrack(O, C + 1, n, current, result);
      current.pop_back();
    }
  }
};
// @lc code=end
