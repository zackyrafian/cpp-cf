#include <bits/stdc++.h>
using namespace std;

string solve (int a, int b, int c, int d) { 
    int coeff_x = a - c; 
    int const_term = d - b;

    if (coeff_x == 0 && const_term == 0) return "Infinite solutions";
    if (coeff_x == 0 && const_term != 0)  return "No solution";
    return "One solution";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << "A: " << solve(-6, 35, -6, -35) << endl;
    cout << "B: " << solve(6, 35, -6, -35) << endl;
    cout << "C: " << solve(-6, 35, -6, 35) << endl;
    cout << "D: " << solve(6, 35, -6, 35) << endl;
    return 0;
}