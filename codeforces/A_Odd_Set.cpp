#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T; cin >> T;
    while (T--) { 
        int N; cin >> N;
        vector<int> X(N * 2);
        
        int odd = 0; 
        int even = 0; 

        for (int i = 0; i < X.size(); i++) {
            cin >> X[i];

            if (X[i] % 2 == 0) { 
                even++;
            } else { 
                odd++;
            }
        }

        if (odd == even) {
             cout << "Yes";
        } else { 
            cout << "No";
        }
      
        cout << endl;
    }

    return 0;
inset}
