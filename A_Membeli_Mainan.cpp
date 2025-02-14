#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int>A = {1,3,4,5,62,3,4};

    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < A.size() - i - 1; j++) {
            if (A[j] < A[j + 1]) {
                swap(A[j], A[j + 1]);
            }
        }
    }
   
    for (int i : A) { 
        cout << i << endl;
    }

    return 0;
}