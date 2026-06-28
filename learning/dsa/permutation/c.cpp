#include <bits/stdc++.h>
using namespace std;


void solve(vector<int>& a, vector<int>& curr, vector<int>& used) {
  int n = a.size(); 
  if (curr.size() == a.size()) { 
    for (int x: curr) { 
      cout << x << ' '; 
    }
    cout << '\n'; 
    return;
  }

  for (int i = 0; i < n; i++) { 
    if (used[i]) continue;
    used[i] = true; 
    curr.push_back(a[i]);
    solve(a, curr, used); 
    curr.pop_back();
    used[i] = false;
  }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a; 
    int n = 3; 
    for (int i = 1; i <= n; i++) { 
      a.push_back(i);
    } 
    vector<int> curr; 
    vector<int> used(a.size(), false); 
    solve(a, curr, used); 

    return 0;
}