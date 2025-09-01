/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
  int maxSubArray(vector<int> &nums) {
    int n = nums.size();
    int maxSum = nums[0];
    int currSum = 0;

    for (int x : nums) {
      currSum = max(x, currSum + x);
      maxSum = max(maxSum, currSum);
    }

    return maxSum;
  }
};
// @lc code=end
