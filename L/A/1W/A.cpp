#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> arr = {3, 7, 1, 9, 4};
  int sum = 0;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] % 2 == 0) {
      sum += arr[i];
    }
  }

  cout << sum;
  return 0;
}