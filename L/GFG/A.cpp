#include <bits/stdc++.h>
using namespace std;

int gcd (int n1, int n2) { 
    if (n1 == 0) { 
        return n2; 
    }

    return gcd(n2 % n1, n1);
}

vector<int> addFraction (vector<int> a, vector<int> b)  {
    vector<int> ans;

    int den = gcd(a[1], b[1]);
    den = (a[1] * b[1] / den);

    int num = (a[0]) * (den / a[1]) + (b[0]) * (den / b[1]);
    
    int common_factor = gcd(num, den);
    den = den / common_factor;
    num = num / common_factor;
    ans.push_back(num);
    ans.push_back(den);
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> a = {1, 2}; 
    vector<int> b = {3, 2};
    vector<int> ans = addFraction(a, b); 
    cout << ans[0] << ", " << ans[1];

    return 0;
}