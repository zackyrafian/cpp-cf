#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> A = {5, 3, 2, 8, 1, 4};
    vector<int> odd,even;
   
    for (int x : A) { 
        if (x % 2 == 0) { 
            even.push_back(x);
        } else { 
            odd.push_back(x);
        }
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end(), greater<>());

    int oddId = 0, evenId = 0;

    for (int i = 0; i < A.size(); i++) { 
        if (A[i] % 2 == 0){
            A[i] = even[evenId++]; 
        } else  {
            A[i] = odd[oddId++];
        }
    }
    for (int i : A) { 
        cout << i ;
    }

    return 0;
}