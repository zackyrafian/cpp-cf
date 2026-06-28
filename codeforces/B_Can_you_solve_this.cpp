#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, M, C;
  cin >> N >> M >> C;

  vector<int> B(M);
  for (int i = 0; i < M; i++) {
    cin >> B[i];
  }

  int count = 0;

  for (int i = 0; i < N; i++) {
    int sum = C;

    for (int j = 0; j < M; j++) {
      int A;
      cin >> A;
      sum += A * B[j];
    }

    if (sum > 0) {
      count++;
    }
  }

  cout << count;
  return 0;
}