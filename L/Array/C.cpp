#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> arr = {12, 35, 1, 10, 34, 1};
    sort(arr.begin(), arr.end());
    cout << arr[arr.size() - 3];

    return 0;
}