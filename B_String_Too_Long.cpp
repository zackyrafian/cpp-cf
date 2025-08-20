#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N; cin >> N; 
    vector<pair<char, long long>> data;
    long long total = 0; 
    bool too_long = false; 

    for (int i = 0; i < N; i++) { 
        char c; 
        long long l; 
        cin >> c >> l;

        if (total + l > 100) { 
            too_long = true;
            break;
        }

        data.push_back({c, l}); 
        total += l;
    }

    if (too_long) { 
        cout << "Too Long";
        return 0; 
    }

    string result; 
    for (auto &[c, l] : data) { 
        result.append(l, c);
    }

    cout << result;

    return 0;
}