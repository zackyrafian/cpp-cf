#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    unordered_set<int> data = {4, 3, 6, 5, 4, 2, 3};
    int target = 5;
    if (data.find(target) != data.end()) cout << "Angka";
    else cout << "Angka tiada";

    return 0;
}