#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s; 
    cin >> s;
     
    if (s.find("COV") != string::npos) { 
        cout << "Veikur!" << endl;
    } else { 
        cout << "Ekki veikur!" << endl;
    }

    return 0;
}
