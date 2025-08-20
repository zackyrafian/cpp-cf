#include <bits/stdc++.h>
using namespace std;

const int OFFSET = 1e6;
const int MAX = 2 * 1e6 + 5;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> n = {1, 4, 3, 2, 7, 4, 1};


    int hashTable[MAX] = {0};

    for (int x : n) { 
        hashTable[x + OFFSET]++;
    }

    for (int i = -1e6; i <= OFFSET; i++) { 
        if (hashTable[i + OFFSET] > 1) { 
            cout << i << " (muncul " << hashTable[i + OFFSET] << " kali)\n";
        }
    }


    return 0;
}