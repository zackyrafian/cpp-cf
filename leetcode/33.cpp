#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) { 
    int left = 0, right = nums.size() - 1;

    while (left <= right) { 
        int mid  = (left + right) / 2;

        if (nums[mid] == target) return mid;

        if (nums[mid] <= target) { 
            if (nums[left] <= target && target < nums[mid]) right = mid - 1;
            else left = mid + 1;
        }else { 
            if (nums[mid] < target && target <= nums[mid]) left = mid + 1;
            else right = mid - 1;
        }
    }
    return -1;
} 

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target;
    cout << "Masukkan target yang ingin dicari: ";
    cin >> target;

    int result = search(nums, target);
    if (result != -1)
        cout << "Target ditemukan di index: " << result << endl;
    else
        cout << "Target tidak ditemukan." << endl;

    return 0;
}