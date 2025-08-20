#include <bits/stdc++.h>
using namespace std;

int sum(int n) { 

    if (n == 1) return 1; 
    return n + sum(n - 1);

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int n; cin >> n; 
    int n = 3; 
    cout << sum(n);


    return 0;
}