#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> nums = {-1, 2, 1, -4};
  int target = 1;
  int n = nums.size();
  int best = nums[0] + nums[1] + nums[2];

  for (int i = 0; i < n - 2; i++) {
    int left = i + 1, right = n - 1;

    while (left < right) {
      int sum = nums[i] + nums[left] + nums[right];

      if (abs(sum - target) < abs(best - target)) {
        best = sum;
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

  cout << best;

  return 0;
}