#include <bits/stdc++.h>
#define pb push_back

using namespace std;

void solve() { 
    int n; cin >> n;
    vector<int> vec;

    for (int i = 0; i < n; i++){
        int x; 
        cin >> x; 
        vec.pb(x);
    }

    sort(vec.begin(), vec.end()); 
    while (vec.size() > 1)  {
        int x = vec[0], y = vec[1];

        vec.erase(vec.begin());
        vec.erase(vec.begin());

        vec.pb((x + y) / 2); 

        sort (vec.begin(), vec.end());
    }

    cout << vec[0] << endl;
   
}
int main () { 
    int t; cin >> t;

    while (t--) { 
        solve();
    }
}