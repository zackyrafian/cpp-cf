#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
using namespace std;

// Fungsi untuk mencetak array
void printArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Fungsi untuk membersihkan layar
void clearScreen() {
    // Gunakan perintah clear untuk Linux/Mac dan cls untuk Windows
    #ifdef _WIN32
        system("cls");  // Windows
    #else
        system("clear");  // Linux/Mac
    #endif
}

// Fungsi Bubble Sort dengan visualisasi
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;

                // Visualisasi setiap kali terjadi swap
                clearScreen();
                printArray(arr);

                // Tunggu 500 milidetik untuk efek animasi
                this_thread::sleep_for(chrono::milliseconds(500));
            }
        }
        if (!swapped) break;
    }
}

int main() {
    vector<int> arr = {5, 3, 4, 5, 7, 8, 8, 8, 6, 2};

    cout << "Array awal:" << endl;
    printArray(arr);
    cout << "\nProses Bubble Sort (animasi):" << endl;

    bubbleSort(arr);

    cout << "\nArray terurut:" << endl;
    printArray(arr);
    
    return 0;
}
