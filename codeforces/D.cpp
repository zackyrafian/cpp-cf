#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n = 5;
  vector<int> arr(n, 0);
  vector<int> diff(n + 1, 0);

  auto rangeUpdate = [&](int l, int r, int val) {
    diff[l] += val;
    diff[r + 1] -= val;
  };

  rangeUpdate(1, 3, 3);
  rangeUpdate(2, 4, 2);

  arr[0] = diff[0];

  for (int i = 1; i < n; i++) {
    arr[i] = arr[i - 1] + diff[i];
  }

  for (int x : arr)
    cout << x << " ";
  return 0;
}