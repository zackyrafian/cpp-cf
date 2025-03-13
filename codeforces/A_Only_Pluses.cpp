#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll max (int a, int b, int c) { 
    int ons = 5; 

    while (ons > 0) { 
        if (a <= b && a <= c) { 
            a++;
        } else if (b <= a && b <= c) { 
            b++;
        } else  {
            c++;
        }
        --ons;
    }
    return (ll) a * b * c; 
}

int main () { 
    int t; cin >> t; 

    vector<ll> r;
    while (t--) { 
        int a, b, c; 
        cin >> a >> b >> c;
        
        r.pb(max(a, b, c));
    }
    for (ll res: r) { 
        cout << res << endl;
    }
}