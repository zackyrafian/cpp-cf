#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<int> arr = {2, 7, 8, 3, 5};
  int target = 9;

  sort(arr.begin(), arr.end());

  for (int i = 0; i < arr.size(); i++) {
    int need = target - arr[i];
    int l = i + 1, r = arr.size() - 1;

    while (l <= r) {
      int mid = l + (r - l) / 2;
      if (arr[mid] == need) {
        cout << arr[i] << " " << arr[mid];
        return 0;
      } else if (arr[mid] < need) {
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }
  }

  return 0;
}