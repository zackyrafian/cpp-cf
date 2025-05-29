#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& A, int k) { 
    int left = 0;
    int right = A.size() - 1;

    while (left <= right) { 
        int mid  = left + (right - left) / 2;

        if (A[mid] == k) { 
            return mid;
        }

        if (A[mid] < k) { 
            left = mid + 1;
        } else { 
            right = mid - 1;
        }
    }

    return -1;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> A = {1, 2, 3, 4, 5};
    int k = 4; 
    int i = 0;
     
    
    int result = binarySearch(A, k);

    cout << result;

    return 0;
}