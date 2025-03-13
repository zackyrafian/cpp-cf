#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    double n;
    cin >> n;
    n *= 0.09144;

    stringstream ss;
    ss << fixed << setprecision(14) << n; 
    string result = ss.str();

    result.erase(result.find_last_not_of('0') + 1, string::npos);
    if (result.back() == '.') result.pop_back(); 

    cout << result << endl;

    return 0;
}
