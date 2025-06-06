#include <bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int>& arr) { 
    int n = arr.size(); 
    
    for (int i = n - 2; i >= 0; i--) { 
        if (arr[i] != arr[n - 1])  {
            return arr[i];
        }
    }

    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> arr = {12,35, 1, 10,34, 1};
    int n = arr.size();

    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) { 
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << getSecondLargest(arr);

    return 0;
}