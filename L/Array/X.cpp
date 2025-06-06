// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int s = 0;

//     vector<int> a = {10, 20, 30, 40, 50};
//     for (int i = 0; i < a.size(); i += 2)  {
//         cout << a[i];
//     }
 
//     return 0;
// }

using namespace std;
#include <bits/stdc++.h>

void getAlternatesRec(vector<int>&arr, int idx, vector<int>& res) {
    if (idx < arr.size()) { 
        res.push_back(arr[idx]);
        getAlternatesRec(arr, idx + 2, res);
    };
}

vector<int> getAlternates(vector<int>& arr) { 
    vector<int> res;
    getAlternatesRec(arr, 0 ,res);
    return res;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> arr = {10, 20, 30, 40, 50};
    vector<int> res = getAlternates(arr);

    for (int x: res) cout << x << " ";

    return 0;
}