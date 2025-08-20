#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<vector<int>> grid(3, vector<int>(3));
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> grid[i][j];
    }
  }

  vector<vector<bool>> marked(3, vector<bool>(3, false));

  int N;
  cin >> N;

  for (int k = 0; k < N; k++) {
    int b;
    cin >> b;

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (grid[i][j] == b) {
          marked[i][j] = true;
        }
      }
    }
  }

  bool bingo = false;

  for (int i = 0; i < 3; i++) {
    if (marked[i][0] && marked[i][1] && marked[i][2]) {
      bingo = true;
    }
  }

  for (int j = 0; j < 3; j++) {
    if (marked[0][j] && marked[1][j] && marked[2][j]) {
      bingo = true;
    }
  }

  if (marked[0][0] && marked[1][1] && marked[2][2]) {
    bingo = true;
  }
  if (marked[0][2] && marked[1][1] && marked[2][0]) {
    bingo = true;
  }

  if (bingo) {
    cout << "Yes";
  } else {
    cout << "No";
  }

  return 0;
}