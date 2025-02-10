#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); 

    int a, b;
    cin >> a >> b;
     
    if (b > a) { 
        cout << "FAKE NEWS!" << endl;
    } else if ( a == b) { 
        cout << "WORLD WAR 3!" << endl;
    } else { 
        cout << "MAGA!" << endl;
    }

    return 0;
}
