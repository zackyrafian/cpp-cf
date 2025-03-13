#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string S; 
    cin >> S; 

    int V = 0;
    int Y = 0;

    for (int i = 0; i < S.length(); i++) {
        if (S[i] == 'a' || S[i] == 'i' || S[i] == 'e' || S[i] == 'o' || S[i] == 'u') { 
            V++;
            Y++;
        } 
        if (S[i] == 'y') { 
            Y++;
        }
    }   

    cout << V << " " << Y;

    return 0;
}
