#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int next_year(int n, vector<vector<int>> pairs) {
    int min_year = INT_MAX;

    for (const auto& pair : pairs) {
        int Y = pair[0], c1 = pair[1], c2 = pair[2];
        int cycle_lcm = lcm(c1, c2); 
        int next_year = Y + cycle_lcm; 
        min_year = min(min_year, next_year); 
    }

    return min_year;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int K;
    cin >> K;

    vector<vector<int>> pairs(K, vector<int>(3));
    for (int i = 0; i < K; i++) {
        cin >> pairs[i][0] >> pairs[i][1] >> pairs[i][2]; 
    }

    cout << next_year(K, pairs) << endl;

    return 0;
}