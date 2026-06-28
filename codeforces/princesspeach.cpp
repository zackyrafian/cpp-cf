#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N, Y;
    cin >> N >> Y;
    
    unordered_set<int> K;
    for (int i = 0; i < Y; i++) {
        int O;
        cin >> O;
        K.insert(O);
    }
    
    int count = K.size();
    for (int i = 0; i < N; i++) {
        if (K.find(i) == K.end()) {
            cout << i << "\n";
        }
    }
    
    cout << "Mario got " << count << " of the dangerous obstacles." << endl;
    
    return 0;
}
