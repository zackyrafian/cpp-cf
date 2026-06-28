#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, k;
  cin >> n >> k;
  vector<int> arr(n);

  int res = 0;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    res += min(2 * arr[i], 2 * (k - arr[i]));
  }
  cout << res;
  return 0;
}