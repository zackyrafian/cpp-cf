#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<vector<int>> a = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9},
  };

  int n = a.size(), m = a[0].size();

  for (int d = 0; d < m + n - 1; d++) {
    vector<int> temp;
    for (int i = 0; i < n; i++) {
      int j = d - i;

      if (j >= 0 && j < m) {
        temp.push_back(a[i][j]);
      }
    }

    if (d % 2 == 0) {
      reverse(temp.begin(), temp.end());
    }

    for (int x : temp) {
      cout << x;
    }
  }

  return 0;
}