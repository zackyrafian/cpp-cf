#include <bits/stdc++.h>
using namespace std;

bool customSort(const string &a, const string &b) {
    if (a.substr(0, 2) == b.substr(0, 2)) { 
        return a.size() < b.size(); 
    }
    return lexicographical_compare(
        a.begin(), a.end(),
        b.begin(), b.end(),
        [](unsigned char c1, unsigned char c2) { return tolower(c1) < tolower(c2); }
    );
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; 

    while (cin >> N) { 
        if (N == 0) break; 
        cin.ignore(); 
        
        vector<string> names(N); 
        for (int i = 0; i < N; i++) {
            getline(cin, names[i]); 
        }

        sort(names.begin(), names.end(), customSort);
        for (const string &name : names) { 
            cout << name << endl;
        }
        cout << endl; 
    }

    return 0;
}