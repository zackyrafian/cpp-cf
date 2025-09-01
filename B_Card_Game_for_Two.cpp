#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  int res = 0;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  sort(nums.begin(), nums.end(), greater<int>());

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      res += nums[i];
    } else {
      res -= nums[i];
    }
  }
  cout << res;

  return 0;
}