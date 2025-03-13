#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    
    int left = 0, right = height.size() - 1; 
    int maxWater = 0;
    
    while (left < right) { 
        int h = min(height[left], height[right]);
        int w = right - left;
        maxWater = max(maxWater, h * w);

        if (height[left] < height[right]) { 
            left++;
        } else { 
            right--;
        }
    }

    cout << maxWater;

    return 0;
}