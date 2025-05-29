#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int data[10] = {1, 1, 3, 4, 3, 3, 3, 9, 1, 9};
    int hasil = 0; 

    for (int i = 0; i < 9; i++) { 

        if (data[i] == data[i + 1]) { 
            hasil++;
        }
    }

    cout << hasil << endl;

    return 0;
}


