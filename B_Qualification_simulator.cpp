#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int N, A, B;
  cin >> N >> A >> B;
  string S;
  cin >> S;

  vector<string> result = {};

  int total = 0, over = 0;

  for (int i = 0; i < N; i++) {
    if (S[i] == 'c') {
      result.push_back("No");
    } else if (S[i] == 'a') {
      if (total < A + B) {
        result.push_back("Yes");

        total++;
      } else {
        result.push_back("No");
      }
    } else if (S[i] == 'b') {
      over++;
      if (total < A + B && over <= B) {
        result.push_back("Yes");

        total++;
      } else {
        result.push_back("No");
      }
    }

    cout << result[i];
    cout << endl;
  }

  return 0;
}
