#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> nums = {-4, -1, 0, 3, 10};
  vector<int> result;

  int r = 0;
  for (int i = 0; i < nums.size(); i++) {
    r = nums[i] * nums[i];
    result.push_back(r);
  }

  sort(result.begin(), result.end());

  for (int x : result) {
    cout << x;
  }
  return 0;
}