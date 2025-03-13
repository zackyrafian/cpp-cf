#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, K; cin >> N >> K;


    if (N % (K + 1) == 0) { 
        cout << "Neibb";
    } else  {
        cout << "Jebb";
    }

    return 0;
}