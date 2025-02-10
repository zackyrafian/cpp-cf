#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;  
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1; 
}

int main() {
    vector<int> arr = {4, 3, 6, 2, 4, 1, 3}; 
    sort(arr.begin(), arr.end());  
    int target = 1;

    int index = binarySearch(arr, target);
    if (index != -1) cout << "Angka ditemukan di index: " << index << "\n";
    else cout << "Angka tidak ditemukan\n";
}
