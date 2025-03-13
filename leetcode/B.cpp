#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> l1 = {2,4,3};
    vector<int> l2 = {5,6,4};

    reverse(l1.begin(), l1.end());
    reverse(l2.begin(), l2.end());

    int R = 0;
    int S = 0;
    
    for (int i = 0; i < l1.size(); i++) { 
        R = R * 10 + l1[i];
        S = S * 10 + l2[i];
    }

    int sum = R + S;

    vector<int> result;
    while (sum > 0) { 
        result.push_back(sum % 10);
        sum /= 10;
    }
 

    for (int i : result) { 
        cout << i;
    }

    return 0;
}