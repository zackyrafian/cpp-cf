#include <bits/stdc++.h>
using namespace std;

int minCoints (int N) { 
    vector<int> coins =  {100, 50, 20, 10, 5, 2, 1};
    int count = 0;

    for (int coin: coins) { 
        while (N >= coin) { 
            N -= coin;
            count++;
        }
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    cout << minCoints(N) << endl;
    return 0;
}