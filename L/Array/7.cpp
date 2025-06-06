#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& arr) { 
    vector<int> res;
    int n = arr.size();

    for (int i = 0; i < n; i++) { 
        int j;

        for (j = i + 1; j < n; j++) { 
            if (arr[i] < arr[j]) break;
        }

        if (j == n) res.push_back(arr[i]);
    }

    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> arr = {16, 17, 4, 3, 5 , 2};
    vector<int> result = leaders(arr);

    for (int res: result) { 
        cout << res << " ";
    }


    return 0;
}