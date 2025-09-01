#include <bits/stdc++.h>
using namespace std;

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

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  Solution sol;

  vector<int> nums(3);
  for (int i = 0; i < nums.size(); i++) {
    cin >> nums[i];
  }
  // vector<int> nums = {1, 1, 2};
  auto res = sol.permuteUnique(nums);
  for (auto &v : res) {
    for (int x : v)
      cout << x << " ";

    cout << endl;
  }

  return 0;
}