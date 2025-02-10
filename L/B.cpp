#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> A = {5, 10, 15, 20};

    for (int i = 0; i < A.size(); i++) { 
        int X; cin >> X;
        cout << A[X] << endl;
    }
    return 0;
}