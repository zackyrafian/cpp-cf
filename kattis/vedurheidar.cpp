#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, T;
    cin >> N >> T;

    for (int i = 0; i < T; i++){ 
        string S; int A; cin >> S >> A;

        if (A < N) { 
            cout << S << " lokud" << endl;
        } else {
            cout << S << " opin" << endl;
        }
    }


    return 0;
}