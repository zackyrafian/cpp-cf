#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> arr = {1, 2, 2, 3, 1, 1, 4, 4};
    int k = 6;
    unordered_map<int, int> freq;
    unordered_set<int> s;


    for (int x : arr) {
        freq[x]++;
    }

    for (int x: arr) { 
        if (freq[x] > 1 && s.count(x) == 0) { 
            cout << x;
            s.insert(x);
        }
    }

    // for (int i : arr) { 
    //     if (freq[i] == 1) { 
    //         cout <<  i;
    //     }
    // }

    // for (auto it: freq) { 
    //     if(it.second == 1) { 
    //         cout << it.first << endl;
    //     }
    // }

    return 0;
}
