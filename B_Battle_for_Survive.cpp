#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () { 
    ll t;
    cin >> t;

    while (t--) { 
        ll n,secLast, sum = 0, last;
        cin >> n;
        vector <ll> v(n);
        for (ll i = 0; i < n - 2; i++ ) { 
            cin >> v[i];
            sum+= v[i];
        }
        cin >> secLast;
        secLast -= sum;
        cin >> last;
        last -= secLast;
        cout << last << endl;
    }
}