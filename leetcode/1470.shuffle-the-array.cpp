/*
 * @lc app=leetcode id=1470 lang=cpp
 *
 * [1470] Shuffle the Array
 */

// @lc code=start
class Solution {
public:
  vector<int> shuffle(vector<int> &nums, int n) {
    vector<int> x;
    vector<int> y;
    vector<int> result;

    for (int i = 0; i < n; i++) {
      x.push_back(nums[i]);
    }

    for (int i = n; i < nums.size(); i++) {
      y.push_back(nums[i]);
    }

    for (int i = 0; i < n; i++) {
      result.push_back(x[i]);
      result.push_back(y[i]);
    }

    return result;
  }
};
// @lc code=end
