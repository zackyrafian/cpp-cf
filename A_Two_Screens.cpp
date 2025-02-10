#include <bits/stdc++.h>

using namespace std;


int main () { 
    int t; cin >> t;

    while(t--) { 
        string s1,s2; 
        cin >> s1 >> s2; 
        int S1 = s1.length();
        int S2 = s2.length();
        int result = 0;

        if (S1 < S2) { 
            result = S2 + 1;
        } else if (S1 > S2)  {
            result = S1 + 1;
        }
        if (S1 == S2) {  
            result = S1 + S2;
        } 
        cout << result << endl;

    }
}