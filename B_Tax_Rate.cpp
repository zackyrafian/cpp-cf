#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N;
  cin >> N;

  int L = N * 100;
  int H = (N + 1) * 100;
  int X = (N * 100) / 108;

  if (X * 108 < L) {
    X++;
  }

  if (X * 108 < H) {
    cout << X;
  } else {
    cout << ":(";
  }

  return 0;
}