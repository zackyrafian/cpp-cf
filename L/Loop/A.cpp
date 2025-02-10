#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t; 

    vector<string> result;
    bool foundBanana = false;

    for (int i = 0; i < t; i++) { 
        string temp;
        cin >> temp;

        if (foundBanana) { 
            result.push_back(temp); 
        }

        if (temp == "banana") { 
            foundBanana = true; 
        }
    }

    for (string word : result) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
