#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    char S; cin >> S;

    if (S == 'A' || S == 'E'  || S == 'I' || S == 'O' || S == 'U') { 
        cout << "Jebb";
    
    }  else if (S == 'Y') { 
        cout << "Kannski";
    } else { 
        cout << "Neibb";
    }
    return 0;
}