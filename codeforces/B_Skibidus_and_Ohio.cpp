#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;

    while (T--) { 
        string s;
        cin >> s;
        int d = 0; 
        int x = 0;
        int a = 0;

        for (int i = 0; i < s.size(); i++) { 
            
            if (s[i] == s[i + 1] && s[i + 1] == s[i]) { 
                d++;
            }

            if (d == 1) { 
                x++;
            } else if (d == 0) { 
                a++;
            }
            
        }

        if (a == 0) { 
            cout << s.length() - x + 1;
        } else {
            cout << s.length() - x;
        }


        cout << endl;
    }

    return 0;
}