#include <bits/stdc++.h>
using namespace std;

int N, S;
vector<int> A; 

bool is_valid(int len) { 
    int sum = 0; 
    for (int i = 0; i < len; i++) sum += A[i];
    if (sum >= S) return true;

    for (int i = len; i < N; i++) {
        sum += A[i] - A[i - len];
        if (sum >= S) return true;
    }

    return false;
} 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> S;
    A.resize(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    int left  = 1, right = N; 
    int ans = 0; 

    while (left <= right) { 
        int mid  = (left + right) / 2;
        if (is_valid(mid)) { 
            ans = mid;
            right = mid - 1;
        }  else  {
            left = mid + 1;
        }
    }

    if (ans == 0) cout << "No subarray" << endl;
    else cout << ans << endl;
    return 0;
}