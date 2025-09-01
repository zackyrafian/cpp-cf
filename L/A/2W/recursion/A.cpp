#include <bits/stdc++.h>
using namespace std;

void func(int n) { 
  if (n > 0) { 
    func(n - 1); 
    cout << n; 
  }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n = 5;
    func(n);


    return 0;
} 