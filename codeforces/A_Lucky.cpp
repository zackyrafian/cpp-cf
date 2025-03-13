#include <iostream>
#include <vector>
using namespace std;

int main () { 
    int t; cin >> t;
    while (t--) { 
        string n; cin >> n;
      
        int sum1 = (n[0] - '0') + (n[1] - '0') + (n[2] - '0');
        int sum2 = (n[3] - '0') + (n[4] - '0') + (n[5] - '0');

        if (sum1 == sum2) { 
            cout << "YES" << endl;
        } else { 
            cout << "NO" << endl;
        }
    }
   
}