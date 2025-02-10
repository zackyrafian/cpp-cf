#include <bits/stdc++.h>
#include <immintrin.h>
#include <thread>
using namespace std;

vector<int> searchWithSIMD(const vector<int>& arr, int target, int start, int end) {
    vector<int> result;
    __m256i targetVec = _mm256_set1_epi32(target);

    int i = start;
    for (; i <= end - 8; i += 8) {
        __m256i data = _mm256_loadu_si256((__m256i*)&arr[i]);
        __m256i cmp = _mm256_cmpeq_epi32(data, targetVec);
        int mask = _mm256_movemask_epi8(cmp);
        if (mask) {
            for (int j = 0; j < 8; j++) {
                if (arr[i + j] == target) {
                    result.push_back(i + j);
                }
            }
        }
    }
    for (; i < end; i++) { 
        if (arr[i] == target) {
            result.push_back(i);
        }
    }
    return result;
}

vector<int> parallelSearch(const vector<int>& arr, int target) {
    int mid = arr.size() / 2;
    vector<int> res1, res2;

    thread t1([&] { res1 = searchWithSIMD(arr, target, 0, mid); });
    thread t2([&] { res2 = searchWithSIMD(arr, target, mid, arr.size()); });

    t1.join();
    t2.join();

    res1.insert(res1.end(), res2.begin(), res2.end());
    return res1;
}

int main() {
    vector<int> arr = {1, 3, 3, 5, 7, 9, 3, 3, 3, 3, 3, 3, 3, 3};
    int target = 3;

    vector<int> result = parallelSearch(arr, target);

    cout << "Target " << target << " ditemukan di indeks: ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
