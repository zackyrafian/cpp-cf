#include <bits/stdc++.h>

using namespace std;

int main () { 
    vector<int> arr = {4,3,5,6,2,3,5,1};

    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++) { 
        cout << arr[i];
    }

}