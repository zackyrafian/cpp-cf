#include <bits/stdc++.h>
using namespace std;

bool isSorted(const vector<int> arr) { 

    for (int i = 1; i < arr.size(); i++) { 
        // if (arr[i - 1] > arr[i]) return false;
        if (arr[i - 1] > arr[i]) return false;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> arr = {20, 50, 40};
    cout << (isSorted(arr) ? "YES" : "NO");
    
    return 0;
}