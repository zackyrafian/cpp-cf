#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    double total_alcohol_first = 0, total_volume_first = 0;
    double total_alcohol_second = 0, total_volume_second = 0;

    // Membaca data untuk tembakan pertama
    for(int i = 0; i < a; i++) {
        int v, c;
        cin >> v >> c;
        total_alcohol_first += v * c;
        total_volume_first += v;
    }

    // Membaca data untuk tembakan kedua
    for(int i = 0; i < b; i++) {
        int v, c;
        cin >> v >> c;
        total_alcohol_second += v * c;
        total_volume_second += v;
    }

    // Menghitung kandungan alkohol rata-rata
    double avg_alcohol_first = (total_alcohol_first / total_volume_first);
    double avg_alcohol_second = (total_alcohol_second / total_volume_second);

    // Membandingkan kandungan alkohol dengan presisi 2 desimal
    if(abs(avg_alcohol_first - avg_alcohol_second) < 0.01) {
        cout << "same" << endl;
    } else {
        cout << "different" << endl;
    }

    return 0;
}