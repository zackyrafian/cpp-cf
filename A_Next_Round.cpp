#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main () { 
    int t; cin >> t; 
    int n; cin >> n;

    int result = 0;
    vector<int> arr;
    for (int i = 0; i < t; i++) { 
        int x; cin >> x;
        arr.pb(x);

        if (arr[i] >= arr[n - 1] && arr[i] > 0)  {
            result++;
        }
    }
    cout << result;
}