#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; 
    cin >> n ;

    cout << 45*n << " ml gin" << endl;
    cout << 30*n << " ml fresh lemon juice" << endl;
    cout << 10*n << " ml simple syrup" << endl;
    cout << n << " slice" << (n > 1 ? "s" : "") << " of lemon" << endl;
    
    return 0;
}