#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a, b;
  cin >> a >> b;

  int pow10 = 1, temp = b;
  while (temp > 0) {
    pow10 *= 10;
    temp /= 10;
  }
  int r = a * pow10 + b;

  int divisor = r;
  for (int i = 2; i * i <= r; i++) {
    if (r % i == 0) {
      divisor = i;
      break;
    }
  }

  int root = sqrt(r);

  if (root * root == r) {
    cout << "Yes";
  } else {
    cout << "No";
  }

  return 0;
}
