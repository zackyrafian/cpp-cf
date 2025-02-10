#include <bits/stdc++.h> 

using namespace std;

int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1, 1e9);
    dp[0] = 0;

    for (int i = 1; i <= amount; i++) {
        for (int coin : coins) {
            if (i >= coin)
                dp[i] = min(dp[i], dp[i - coin] + 1);
        }
    }
    return dp[amount] == 1e9 ? -1 : dp[amount];
}

int main() {
    vector<int> coins = {1, 3, 4};
    int amount = 6;
    cout << "Min coin: " << coinChange(coins, amount) << endl;
}