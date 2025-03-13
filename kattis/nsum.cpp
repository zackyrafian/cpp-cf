#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t; 
    vector<int> a(t);  
    int r = 0;  
    for (int i = 0; i < t; i++) {
        cin >> a[i];
        r += a[i];
    }
    cout << r << endl;


    return 0;
}