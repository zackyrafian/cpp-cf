#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    while (cin >> n) { 
        int sum = 0;

        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                sum += i;  
                if (i != 1 && i * i != n) { 
                    sum += n / i;  
                }
            }
        }

        cout << n << " ";
        if (sum == n) {
            cout << "perfect";
        } else if (abs(sum - n) <= 2) {
            cout << "almost perfect";
        } else {
            cout << "not perfect";
        }
        cout << endl;
    }

    return 0;
}
