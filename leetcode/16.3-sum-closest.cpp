/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution {
public:
  int threeSumClosest(vector<int> &nums, int target) {
    int n = nums.size();
    if (n < 3)
      return 0;
    sort(nums.begin(), nums.end());
    int b = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < n - 2; i++) {
      int left = i + 1, right = n - 1;

      while (left < right) {
        int sum = nums[i] + nums[left] + nums[right];

        if (abs(sum - target) < abs(b - target)) {
          b = sum;
        }

        if (sum < target) {
          left++;
        } else if (sum > target) {
          right--;
        } else {
          return target;
        }
      }
    }
    return b;
  }
};
// @lc code=end
