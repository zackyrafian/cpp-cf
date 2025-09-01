#include <bits/stdc++.h>
using namespace std;

struct Class {
  int pass;
  int total;
  double delta() const {
    return double(pass + 1) / (total + 1) - double(pass) / total;
  }
};

struct cmp {
  bool operator()(const Class &a, const Class &b) {
    return a.delta() < b.delta();
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<vector<int>> c = {{1, 2}, {3, 5}, {2, 2}};
  int extraStudents = 2;

  priority_queue<Class, vector<Class>, cmp> pq;

  for (auto &cls : c) {
    pq.push({cls[0], cls[1]});
  }

  while (extraStudents--) {
    Class top = pq.top();
    pq.pop();
    top.pass += 1;
    top.total += 1;
    pq.push(top);
  }

  double result = 0.0;
  int n = c.size();
  while (!pq.empty()) {
    Class cls = pq.top();
    pq.pop();
    result += double(cls.pass) / cls.total;
  }

  cout << fixed << setprecision(5) << result / n;
  return 0;
}