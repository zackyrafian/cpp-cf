#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15};
    int P = 0;
    int N = 0;

    for (int i = 0; i < A.size(); i++) { 
        if (A[i] > 0) { 
            P++;
        } else  if (A[i] < 0) { 
            N += A[i];
        } 
    } 
    cout << P << " " << N << endl;
    return 0;
}