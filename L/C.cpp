#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n = 687;
  vector<int> digits;
  while (n > 0) {
    int digit = n % 10;
    digits.push_back(digit);
    n /= 10;
  }

  int result = 0;
  for (int x : digits) {
    result += x;
  }
  cout << result;

  return 0;
}