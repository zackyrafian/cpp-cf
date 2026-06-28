#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b; 
    char x;
    cin >> a >> x >> b;

    if (a == b) {
        cout << "Goggi svangur!";
    } else if (a > b) {
        cout << ">";
    } else if (a < b) { 
        cout << "<";
    }
   
    return 0;
}