#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s = "Hello World";

  int i = s.length() - 1;
  while (i >= 0 && s[i] == ' ') {
    i--;
  }

  int count = 0;

  while (i >= 0 && s[i] != ' ') {
    count++;
    i++;
  }

  cout << count;
  return 0;
}