#include <iostream>
#include <vector>

using namespace std;

int rejected_groups(int S, int K, vector<int>& groups) {
    int rejected = 0;
    int remaining_seats = S;

    for (int group : groups) {
        if (group <= remaining_seats) {
            remaining_seats -= group;  
        } else {
            rejected++; 
        }
    }

    return rejected;
}

int main() {
    int S, K;
    cin >> S >> K;

    vector<int> groups(K);
    for (int i = 0; i < K; i++) {
        cin >> groups[i];
    }

    cout << rejected_groups(S, K, groups) << endl;
    return 0;
}
