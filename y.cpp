#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n = 13, m = 4; 
    int f = n / m;  

    for (int i = 1; i < n; i++) { 
      if (m * f < n) { 
        f = f + i;
      }
    }

    return 0;
}