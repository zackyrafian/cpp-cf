#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    vector<pair<int, int>> pref(N);
    for (int i = 0; i < N; ++i) {
        cin >> pref[i].first >> pref[i].second;
    }

    int min_start = 0;
    int max_end = 200000;

    for (int i = 0; i < N; ++i) {
        min_start = max(min_start, pref[i].first); 
        max_end = min(max_end, pref[i].second);    
    }

    if (min_start > max_end) {
        cout << "bad news" << endl;
    } else {
        int count = max_end - min_start + 1;
        cout << count << " " << min_start << endl;
    }

    return 0;
}