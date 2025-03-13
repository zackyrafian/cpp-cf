#include <iostream>

using namespace std;
void solve() { 
    int t; cin >> t;
    int a = 0;
    int d = 0;

    string s;
    cin >> s;
    
    for (int i = 0; i < s.length(); i++) { 
        if (s[i] == 'A') { 
            a++;
        } else if (s[i] == 'D') { 
            d++;
        }
    }

    if (a > d) { 
        cout << "Anton" << endl;
    } else if (d > a) { 
        cout << "Danik" << endl;
    } else if (a == d) {
        cout << "Friendship" << endl;
    }
}   

int main () { 
   solve();
}