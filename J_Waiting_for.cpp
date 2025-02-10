#include <bits/stdc++.h>
#define pb push_back
using namespace std;


int main () {
    int t; cin >> t;
    int stop = 0;
    int seat_r = 0;

    while (t--) { 
        string s; cin >> s;
        int n; cin >> n; 

        if (s == "P") { 
            stop += n;
        }

        if (s == "B") { 
            if (stop <= n) { 
                seat_r = n - stop;
                stop = 0;
            } else { 
                seat_r =0;
                stop -= n;
            }
            if (seat_r > 0) { 
                cout << "YES" << endl;
            } else { 
                cout << "NO" << endl;
            }
        }
    }
}

