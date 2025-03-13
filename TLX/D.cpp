#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> A = {4,4,3,2,7,2};

    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < A.size() - i; j++) {
            if (A[j] > A[j + 1]) {
                 swap(A[j], A[j + 1]);
            }
        }
    }

    for (int i : A) { 
        cout << i << endl;
    }

    return 0;
}