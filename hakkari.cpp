#include <bits/stdc++.h>
using namespace std;
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int r, c; 
    cin >> r >> c; 

    vector<pair<int, int>> mines;

    for (int i = 1; i <= r; i++) { 
        string row; 
        cin >> row;
        for (int k = 1; k <= c; k++) { 
            if (row[k - 1] == '*') { 
                mines.pb({i, k});
            }
        }
    }

    cout << mines.size() << endl;

    for(auto &[x, y] : mines) { 
        cout << x << " " << y << endl;
    }
    return 0;
}