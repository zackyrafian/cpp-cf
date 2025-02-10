#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    vector<int> arr = {4, 3, 6, 5, 4, 2, 3};
    unordered_map<int, int> indexMap;
    
    for (int i = 0; i < arr.size(); i++) { 
        if (indexMap.find(arr[i]) == indexMap.end())
            indexMap[arr[i]] = i;
    }

    int target = 5;

    if (indexMap.find(target) != indexMap.end())
        cout << "Angka ditemukan di index: " << indexMap[target];
    else 
        cout << "Angka tidak ditemukan";

    return 0;
}