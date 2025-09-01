/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
  vector<int> sortedSquares(vector<int> &nums) {
    vector<int> result;
    int r = 0;
    for (int i = 0; i < nums.size(); i++) {
      r = nums[i] * nums[i];
      result.push_back(r);
    }
    sort(result.begin(), result.end());

    return result;
  }
};
// @lc code=end
