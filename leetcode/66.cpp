#include <bits/stdc++.h>
using namespace std;

class Solution { 
public: 
    vector<int> plusOne(vector<int>& digits) { 
        int n = digits.size();

        for (int i = n - 1; i >= 0; i--) { 
            if (digits[i] < 9) { 
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> digits = {1,9,9};
    Solution sol;
    vector<int> result = sol.plusOne(digits);

    for (int num: result) { 
        cout << num;
    }
    cout << endl;
    return 0;
}