#include <bits/stdc++.h>
using namespace std;

unordered_map<int, vector<int>> preprocess(const vector<int>& arr) {
    unordered_map<int, vector<int>> indexMap;
    for (int i = 0; i < arr.size(); i++) {
        indexMap[arr[i]].push_back(i);
    }
    return indexMap;
}

int main() {
    vector<int> arr = {1, 3, 3, 5, 7, 9, 3, 3};
    unordered_map<int, vector<int>> indexMap = preprocess(arr);

    int target = 3;
    if (indexMap.find(target) != indexMap.end()) {
        cout << "Target " << target << " ditemukan di indeks: ";
        for (int index : indexMap[target]) {
            cout << index << " ";
        }
        cout << endl;
    } else {
        cout << "Target " << target << " tidak ditemukan" << endl;
    }

    return 0;
}
