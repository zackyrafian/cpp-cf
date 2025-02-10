#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string S; 
    cin >> S;
    string result = ""; 

    for (char c : S) { 
        if (c == 'e') {
            result += "ee";  
        } else {
            result += c;  
        }
    }

    cout << result << endl;
    return 0;
}
