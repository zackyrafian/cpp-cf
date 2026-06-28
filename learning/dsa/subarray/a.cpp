#include <bits/stdc++.h>
using namespace std;


void solve(vector<int>& arr, int start, int end) {
  if (end == arr.size()) { 
    return;
  } else if (start > end) { 
    solve(arr, 0, end + 1); 
  } else { 
    for (int i = start; i <= end; i++) { 
      cout << arr[i] << ' '; 
    }
    cout << endl;
    solve(arr,start + 1, end);
  }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a = {1,2,3,4}; 
    // int n = a.size(); 
    // for (int i = 0; i < n; i++) { 
    //   for (int j = i; j < n; j ++) { 
    //     for (int k = i; k <= j; k++) { 
    //       cout << a[k];
    //     }
    //     cout << endl;
    //   }
    // }
    // 
    solve(a, 0, 0);
    return 0;
}