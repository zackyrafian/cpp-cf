#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> A = {1,2,3};

    int T = 0;
    for (int i = 0; i < A.size(); i++) { 
        T += A[i];
    }

    cout << T;

    return 0;
}
