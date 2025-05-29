#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& a) { 
    if (a.size() == 0) return 0;

    int i = 0; 
    for (int j = 1; j < a.size(); j++) { 
        if (a[j] != a[i]) {
            i++;
            a[i] = a[j];
        }
    }
    return i + 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> a = {0,0,1,1,1,2,2,3,3,4};
    int k = removeDuplicates(a);

    for (int i = 0; i < k; i++) cout << a[i];
    return 0;
}