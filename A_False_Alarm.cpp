#include <bits/stdc++.h>
using namespace std;

bool pass(const vector<int>& d, int x) { 
    int n = d.size(); 

    for (int p = 0; p < n; ++p) { 
        bool s = true; 

        for (int i = 0; i < n; ++i) { 
            if (d[i] == 0) continue;

            if (i < p || i >= p + x) { 
                s = false;
                break;
            }
        }
        if (s) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t; 

    while(t--) { 
        int n, x; cin >> n >> x; 
        vector<int> d(n);

        for (int i = 0; i < n; ++i) { 
            cin >> d[i];
        }

        if (pass(d, x)) { 
            cout << "YES";
        }else { 
            cout << "NO";
        }

        cout << endl;
    }

    return 0;
}