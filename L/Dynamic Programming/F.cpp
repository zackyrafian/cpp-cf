#include <bits/stdc++.h>

using namespace std;

int knapsack(int n, int W, vector<int> & weight, vector<int> & value) { 
    vector<vector<vector<int>>> dp (n+1 , vector<vector<int>> (W+1, vector<int> (W+1, 0)));

    for (int i = 1; i <= n; i++) { 
        for (int w = 0; w <= W; w++) { 
            for (int k = 0; k <= W; k++)  {
                if (weight[i - 1] <= w) { 
                    dp[i][w][k] = max(dp[i-1][w][k], value[i-1] + dp[i-1][w-weight[i-1]][k-1]);
                }
                else { 
                    dp [i][w][k] = dp[i-1][w][k];
                }
            }
        }
    }
    return dp[n][W][W];
}

int main () { 
    vector<int> weight = {1,2,3};
    vector<int> value = {10,20,30};
    int W = 4;

    cout << knapsack(3, W, weight, value) << endl;
}