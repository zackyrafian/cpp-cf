#include <bits/stdc++.h>
using namespace std;

// Fungsi untuk mencari subarray dengan jumlah maksimum
pair<int, int> findMaxSubarray(vector<int>& a) {
    int maxSum = INT_MIN, currentSum = 0;
    int start = 0, end = 0, tempStart = 0;

    for (int i = 0; i < a.size(); i++) {
        currentSum += a[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
            start = tempStart;
            end = i;
        }
        if (currentSum < 0) {
            currentSum = 0;
            tempStart = i + 1;
        }
    }
    return {start, end};
}

// Fungsi untuk memeriksa apakah array a dapat diubah menjadi array b
bool canTransform(vector<int>& a, vector<int>& b) {
    // Jika panjang a dan b berbeda, tidak mungkin diubah
    if (a.size() != b.size()) return false;

    // Jika elemen a dan b sudah sama, tidak perlu operasi
    if (a == b) return true;

    // Jika jumlah elemen a dan b berbeda, tidak mungkin diubah
    // (karena operasi hanya mengganti subarray, tidak mengubah panjang total)
    return false;
}

// Fungsi untuk mencetak urutan operasi
void printOperations(vector<int>& a, vector<int>& b) {
    vector<pair<pair<int, int>, vector<int>>> operations;

    while (a != b) {
        // Cari subarray dengan jumlah maksimum
        auto [start, end] = findMaxSubarray(a);

        // Tentukan pengganti yang diperlukan
        vector<int> replacement;
        for (int i = start; i <= end; i++) {
            replacement.push_back(b[i]);
        }

        // Lakukan penggantian
        a.erase(a.begin() + start, a.begin() + end + 1);
        a.insert(a.begin() + start, replacement.begin(), replacement.end());

        // Simpan operasi
        operations.push_back({{start + 1, end + 1}, replacement});
    }

    // Cetak jumlah operasi
    cout << operations.size() << endl;

    // Cetak detail setiap operasi
    for (auto& op : operations) {
        auto [l, r] = op.first;
        auto& rep = op.second;
        cout << l << " " << r << " " << rep.size() << endl;
        for (int num : rep) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        if (canTransform(a, b)) {
            printOperations(a, b);
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}