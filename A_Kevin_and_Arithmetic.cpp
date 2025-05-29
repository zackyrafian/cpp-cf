#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Separate even and odd numbers
        vector<int> evens, odds;
        for (int i = 0; i < n; ++i) {
            if (a[i] % 2 == 0) {
                evens.push_back(a[i]);
            } else {
                odds.push_back(a[i]);
            }
        }

        // Sort even numbers in ascending order
        sort(evens.begin(), evens.end());

        // Sort odd numbers in descending order
        sort(odds.begin(), odds.end(), greater<int>());

        // Combine sorted even and odd numbers
        vector<int> sorted_a(evens.begin(), evens.end());
        sorted_a.insert(sorted_a.end(), odds.begin(), odds.end());

        int points = 0;
        long long s = 0;
        for (int i = 0; i < n; ++i) {
            s += sorted_a[i];
            if (s % 2 == 0) {
                points++;
                while (s % 2 == 0) {
                    s /= 2;
                }
            }
        }

        cout << points << endl;
    }
    return 0;
}