/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution {
public:
  vector<vector<int>> fourSum(vector<int> &nums, int target) {
    vector<vector<int>> res;
    int n = nums.size();
    if (n < 4)
      return res;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 3; i++) {
      if (i > 0 && nums[i] == nums[i - 1])
        continue;

      for (int j = i + 1; j < n - 2; j++) {
        if (j > i + 1 && nums[j] == nums[j - 1])
          continue;

        long long newTarget = (long long)target - nums[i] - nums[j];
        int l = j + 1, r = n - 1;

        while (l < r) {
          long long sum = nums[l] + nums[r];
          if (sum == newTarget) {
            res.push_back({nums[i], nums[j], nums[l], nums[r]});
            l++;
            r--;
            while (l < r && nums[l] == nums[l - 1])
              l++;
            while (l < r && nums[r] == nums[r + 1])
              r--;
          } else if (sum < newTarget)
            l++;
          else
            r--;
        }
      }
    }
    return res;
  }
};
// @lc code=end
