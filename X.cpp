#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<vector<int>> nums = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  int n = nums.size(), m = nums[0].size();
  vector<vector<int>> prefix(n, vector<int>(m, 0));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int up = (i > 0 ? prefix[i - 1][j] : 0);
      int left = (j > 0 ? prefix[i][j - 1] : 0);
      int diag = (i > 0 && j > 0 ? prefix[i - 1][j - 1] : 0);

      prefix[i][j] = nums[i][j] + up + left - diag;

      cout << prefix[i][j] << " ";
    }
  }

  return 0;
}