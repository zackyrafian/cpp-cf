/*
 * @lc app=leetcode id=47 lang=cpp
 *
 * [47] Permutations II
 */

// @lc code=start
class Solution {
public:
  vector<vector<int>> permuteUnique(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    vector<int> curr;
    vector<bool> used(nums.size(), false);
    backtrack(nums, used, curr, result);
    return result;
  }

  void backtrack(vector<int> &nums, vector<bool> &used, vector<int> &curr,
                 vector<vector<int>> &result) {
    if (curr.size() == nums.size()) {
      result.push_back(curr);
      return;
    }

    for (int i = 0; i < nums.size(); i++) {
      if (used[i])
        continue;
      if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])
        continue;

      used[i] = true;
      curr.push_back(nums[i]);
      backtrack(nums, used, curr, result);

      used[i] = false;
      curr.pop_back();
    }
  }
};
// @lc code=end
