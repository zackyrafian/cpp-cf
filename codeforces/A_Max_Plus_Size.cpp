#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while(t--) { 
        int n; cin >> n; 
        vector<int> a(n); 
        
        for (int i = 0; i < n; i++) { 
            cin >> a[i];
        }

        unordered_map<int, int> freq; 

        for (int num: a) { 
            freq[num]++;
        }

        int max_num = a[0];
        int max_freq = 0;

        for (const auto& e: freq) { 
            if (e.second > max_freq) {
                max_freq = e.second;
                max_num = e.first;
            }
        }

        cout << max_num << endl;
      

        cout << endl;
    }

    return 0;
}