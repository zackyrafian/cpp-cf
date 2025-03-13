#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s1,s2; cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    
    int a = stoi(s1);
    int b = stoi(s2);

    if (a > b) {
        cout << a << endl;
    }else{
        cout << b << endl;
    }
    return 0;
}