#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;

    while(T--)  {
        int a, b; 
        cin >> a >> b;

        vector<string> c(a);
        int tl = 0;
        int f = 0;

        for (int i = 0; i < a; i++) { 
            cin >> c[i];
        } 

        for (int i = 0; i < a; i++) { 
            tl += (int)c[i].length();
            if (tl <= b) { 
                f++; 
            }else { 
                break;
            }
        }

        cout << f;
        cout << endl;
    }

    return 0;
}