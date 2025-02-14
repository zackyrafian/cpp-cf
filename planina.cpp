#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    int P = pow((1 << N) + 1, 2);  
    cout << P << endl;
    return 0;
}