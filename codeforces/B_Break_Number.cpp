#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  int a = 1;

  while (a * 2 <= n) {
    a *= 2;
  }

  cout << a;

  return 0;
}