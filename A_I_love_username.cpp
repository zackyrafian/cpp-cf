#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    vector<int> arr(t);

    if (t == 1) {
        cout << 0 << endl;
        return 0;
    }

    cin >> arr[0];
    int maxPoint = arr[0];
    int minPoint = arr[0];
    int count = 0;

    for (int i = 1; i < t; i++) {
        cin >> arr[i];

        if (arr[i] < minPoint) {
            minPoint = arr[i];
            count++;
        } else if (arr[i] > maxPoint) {
            maxPoint = arr[i];
            count++;
        }
    }

    cout << count << endl;
    return 0;
}