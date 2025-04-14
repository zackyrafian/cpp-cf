#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;

    while (T--) { 
        string S; cin >> S; 
        string Password = "";

        int maxTime = -1;
        string password = "";

        for (char c = 'a'; c <= 'z'; ++c) { 
            for (int pos = 0; pos <= S.size(); ) { 
                string temp = S;
                temp.insert(pos, 1, c);

                int time = 2;
                for (int i = 1; i < S.size(); ++i) { 
                    if (S[i] == S[i - 1]) {
                        time += 1; 
                    } else {
                         time += 2;
                    }
                }

                if (time > maxTime) { 
                    maxTime = time; 
                    password = temp;      
            }
        }
       
        cout << Password << '\n';
    }
    }

    return 0;
}