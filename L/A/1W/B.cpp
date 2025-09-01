#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> arr = {5, 2, 7, 3, 6};
  vector<int> prefix(arr.size());
  prefix[0] = arr[0];

  for (int i = 1; i < arr.size(); i++) {
    prefix[i] = prefix[i - 1] + arr[i];
  }

  int l = 1, r = 3;
  int rangeSum = prefix[r] - prefix[l - 1];

  // cout << prefix[r] << endl; // 17
  // cout << prefix[l - 1];     // 5

  cout << rangeSum;
  return 0;
}
