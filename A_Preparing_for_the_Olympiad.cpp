#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector<int> a(n);
        std::vector<int> b(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            std::cin >> b[i];
        }

        int max_diff = -1e9;
        for (int mask = 0; mask < (1 << n); ++mask) {
            int monocarp_sum = 0;
            int stereocarp_sum = 0;
            std::vector<bool> monocarp_train(n, false);
            for (int i = 0; i < n; ++i) {
                if ((mask >> i) & 1) {
                    monocarp_train[i] = true;
                    monocarp_sum += a[i];
                }
            }

            for (int i = 0; i < n - 1; ++i) {
                if (monocarp_train[i]) {
                    stereocarp_sum += b[i + 1];
                }
            }
            max_diff = std::max(max_diff, monocarp_sum - stereocarp_sum);
        }
        std::cout << max_diff << std::endl;
    }
    return 0;
}