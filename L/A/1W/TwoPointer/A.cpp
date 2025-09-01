#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> nums = {1, 3, 4, 6, 8, 10};
  int target = 4;

  int left = 0, right = nums.size() - 1;

  while (left < right) {
    int sum = nums[left] + nums[right];
    if (sum == target) {
      cout << left << "," << right;
      break;
    } else if (sum < target) {
      left++;
    } else {
      right--;
    }
  }

  return 0;
}