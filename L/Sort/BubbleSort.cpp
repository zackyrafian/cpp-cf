#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int>& arr) { 
    int n = arr.size();

    for(int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
            if(arr[j] > arr[j + 1]) { 
                // swap(arr[j], arr[j + 1]);
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    vector<int> arr = {64, 25 ,30, 13, 16, 178};
    bubbleSort(arr);
    for (int i : arr) { 
        cout << i << " ";
    }
    cout << endl;
} 